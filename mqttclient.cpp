#include "mqttclient.h"
#include <iostream>

using namespace std;

mqttclient::mqttclient() : mosqpp::mosquittopp("SimpleClient")
{
	const char *host = "localhost";
	this->connect(host);
}

void mqttclient::on_connect(int rc)
{
	if (!rc)
		this->subscribe(NULL, "$SYS/formatted/#");
}

void mqttclient::on_message(const struct mosquitto_message *message)
{
	cout << message->topic << " " << (char*) message->payload << endl;
}
