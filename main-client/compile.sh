#compile whole program
g++ main.cpp ./include/*.h ./include/states/*.h ./src/*.cpp ./src/states/*.cpp -o mc.run -std=c++11 -lboost_system -lboost_thread -lsfml-graphics -lsfml-window -lsfml-system -pthread -lpthread

# g++ -c main.cpp ./include/*.h ./src/*.cpp
rm *.o
rm *.gch