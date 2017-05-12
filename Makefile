CROSS_COMPILE?=
CXX=g++

all: SimpleMosquittoClient

SimpleMosquittoClient: main.o mqttclient.o
	$(CROSS_COMPILE)$(CXX) -g -o SimpleMosquittoClient main.o mqttclient.o -lmosquittopp

%.o: %.cpp
	$(CROSS_COMPILE)$(CXX) -g -c $< --std=c++11

clean:
	rm *.o SimpleMosquittoClient
