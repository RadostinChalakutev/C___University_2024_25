#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Box.H>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <ctime>

const double DIESEL_PRICE = 2.70;
const double PETROL_PRICE = 2.90;

Fl_Input *distanceInput, *consumptionInput;
Fl_Choice *fuelTypeChoice;
Fl_Box *resultBox;

void calculate_cb(Fl_Widget*, void*) {
    double distance = atof(distanceInput->value());
    double consumption = atof(consumptionInput->value());
    double pricePerLiter = (fuelTypeChoice->value() == 0) ? DIESEL_PRICE : PETROL_PRICE;

    double liters = (distance / 100.0) * consumption;
    double totalCost = liters * pricePerLiter;

    std::ostringstream out;
    out << "Общо гориво: " << std::fixed << std::setprecision(2) << liters << " л\n"
        << "Цена: " << std::fixed << std::setprecision(2) << totalCost << " лв.";

    resultBox->label(out.str().c_str());

    // Запис в history.txt
    std::ofstream file("history.txt", std::ios::app);
    if (file) {
        std::time_t t = std::time(nullptr);
        char buf[64];
        std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
        file << buf
             << ", Distance: " << distance << " km"
             << ", Consumption: " << consumption << " l/100km"
             << ", Fuel: " << (fuelTypeChoice->value() == 0 ? "Diesel" : "Petrol")
             << ", Liters: " << std::fixed << std::setprecision(2) << liters
             << ", Cost: " << totalCost << "\n";
    }
}

int main(int argc, char **argv) {
    Fl_Window *win = new Fl_Window(400, 330, "Калкулатор за гориво");

    new Fl_Box(20, 20, 150, 25, "Изминати км:");
    distanceInput = new Fl_Input(180, 20, 180, 25);

    new Fl_Box(20, 60, 150, 25, "Разход (л/100км):");
    consumptionInput = new Fl_Input(180, 60, 180, 25);

    new Fl_Box(20, 100, 150, 25, "Тип гориво:");
    fuelTypeChoice = new Fl_Choice(180, 100, 180, 25);
    fuelTypeChoice->add("Дизел");
    fuelTypeChoice->add("Бензин");
    fuelTypeChoice->value(0);

    Fl_Button *calcBtn = new Fl_Button(140, 150, 120, 30, "Изчисли");
    calcBtn->callback(calculate_cb);

    resultBox = new Fl_Box(20, 200, 360, 80, "");
    resultBox->box(FL_DOWN_BOX);
    resultBox->labelsize(14);
    resultBox->align(FL_ALIGN_INSIDE | FL_ALIGN_WRAP);

    win->end();
    win->show(argc, argv);
    return Fl::run();
}