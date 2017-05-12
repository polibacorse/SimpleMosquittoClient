CROSS_COMPILE?=
CXX=g++

all: SimpleMqttClient

SimpleMqttClient: main.o mqttclient.o
	$(CROSS_COMPILE)$(CXX) -g -o SimpleMqttClient main.o mqttclient.o -lmosquittopp

%.o: %.cpp
	$(CROSS_COMPILE)$(CXX) -g -c $< --std=c++11

clean:
	rm *.o SimpleMqttClient
