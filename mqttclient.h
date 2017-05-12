#ifndef MQTTCLIENT_H
#define MQTTCLIENT_H
#include <mosquittopp.h>

class mqttclient : public mosqpp::mosquittopp
{
public:
	mqttclient();

	void on_connect(int rc);
	void on_message(const struct mosquitto_message *message);
};

#endif // MQTTCLIENT_H
