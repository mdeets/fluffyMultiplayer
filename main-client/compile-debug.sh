#compile whole program for gdb
date
g++ -g main.cpp ./include/*.h ./include/states/*.h ../include/uiComponents/*.h /src/*.cpp ./src/states/*.cpp -o mc.run -std=c++11 -lboost_system -lboost_filesystem -lboost_thread -lsfml-graphics -lsfml-window -lsfml-system -pthread -lpthread
date
