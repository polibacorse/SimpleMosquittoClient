#include "mqttclient.h"
#include <unistd.h>

int main()
{
	mqttclient* client = new mqttclient();
	client->loop_forever();
}
