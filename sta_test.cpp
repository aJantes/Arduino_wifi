#include <WiFi.h>

const char *ssid = "********";
const char *password = "********";

void setup()
{
  Serial.begin(115200);
  Serial.println();

  WiFi.mode(WIFI_STA); //设置工作在STA模式

  WiFi.begin(ssid, password); //连接网络

  while (!WiFi.isConnected()) //等待网络连接成功
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected!");

  Serial.print("IP address: ");
  Serial.println(WiFi.localIP()); //打印模块IP

  Serial.print("subnetMask: ");
  Serial.println(WiFi.subnetMask()); //打印子网掩码

  Serial.print("gateway: ");
  Serial.println(WiFi.gatewayIP()); //打印网关地址

  Serial.print("dns: ");
  Serial.println(WiFi.dnsIP()); //打印DNS地址

  Serial.print("mac Address: ");
  Serial.println(WiFi.macAddress()); //打印mac地址

  WiFi.setHostname("myHostName"); //设置主机名
  Serial.print("HostName: ");
  Serial.println(WiFi.getHostname()); //打印主机名

  Serial.println(WiFi.status());
  WiFi.disconnect(); //断开当前网络
  delay(1000);
  Serial.println(WiFi.status());
}

void loop()
{
}
