class="text_to_html">#include &lt;iostream&gt;
#include &lt;string&gt;
#include &quot;temperature.h&quot;

using namespace std;

int main() {
	char * name=&quot;Tempretatures&quot;;
	int temp[N][M];
	fillArray(temp, N, M);
	cout &lt;&lt; &quot;Array with temperatures:&quot; &lt;&lt; endl;
	printArray(temp, N, M);
	cout &lt;&lt; &quot;Average temperature:&quot; &lt;&lt; avgTemperature(temp, N, M) &lt;&lt; endl;
	cout &lt;&lt; &quot;Day with miminum average temperature: &quot; &lt;&lt; dayMinAvgTemp(temp, N, M) &lt;&lt; endl;
	cout &lt;&lt; &quot;The hotest our of the day: &quot; &lt;&lt; hourMaxTemp(temp, N, M) &lt;&lt; endl;
	cout &lt;&lt; &quot;Number of days with tempearture 0: &quot; &lt;&lt; numDaysZero(temp, N, M) &lt;&lt; endl;

	return 0;
}
