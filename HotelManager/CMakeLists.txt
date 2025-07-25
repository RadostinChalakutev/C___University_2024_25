cmake_minimum_required(VERSION 3.10)
project(HotelManager)

# Изискваме C++17 (или по-нова версия)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Намираме всички наши .cpp файлове
set(SOURCES
        main.cpp
        Person.cpp
        Guest.cpp
        Room.cpp
        Reservation.cpp
        HotelManager.cpp
)

# Дефинираме изпълнимия таргет и му подаваме всички източници
add_executable(HotelManager ${SOURCES})

# Ако по-късно добавиш поддиректории, може вместо горното да ползваш:
# file(GLOB SOURCES "*.cpp")
# add_executable(HotelManager ${SOURCES})
