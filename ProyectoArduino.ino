/*
Proyecto Universitario
En este proyecto se han empleado librerías externas bajo la licencia de código abierto de ArduinoJSON y CBot, siendo propiedad de sus respectivos autores. Asimismo, se ha utilizado la librería ESP8266 para Arduino con el fin de operar ciertos módulos sin alterar el código original, y se ha atribuido el crédito correspondiente en la sección correspondiente a las bibliotecas utilizadas en el README.
*/

// Importación de Bibliotecas
#include "./Bibliotecas/CTBot.h"
#include "./Bibliotecas/Utilities.h"
#include "config.h" // En esta biblioteca debe de ir tu Token con la siguiente sintaxis: const char* TELEGRAM_BOT_TOKEN = "TU_TOKEN";

// Variables Principales
String ssid  = "SSID"; // REMPLAZAR LA VARIABLE ssid CON EL SSID DE TU RED WIFI
String pass  = "Password"; // REMPLAZAR LA VARIABLE pass CON LA CONTRASEÑA DE TU RED WIFI
String token = TELEGRAM_BOT_TOKEN; // REMPLAZAR LA VARIABLE token CON EL TOKEN DE TU BOT DE TELEGRAM

int pinHumo = A0; // Define el pin analógico al que está conectado el sensor de humo
int umbralHumo = 500; // Define el umbral para la detección de humo

// Inicializamos CBot
CTBot myBot;

void setup() {
    // Inicializar el puerto Serial
    Serial.begin(115200);
    Serial.println("Iniciando TelegramBot...");

    // Conectar el ESP8266 al punto de acceso deseado
    myBot.wifiConnect(ssid, pass);

    // Establecer el token del bot de Telegram
    myBot.setTelegramToken(token);

    // Comprobar si todo está bien
    if (myBot.testConnection())
    Serial.println("\nConexión Exitosa");
    else
    Serial.println("\nConexión No Exitosa");
}

void loop() {
    // Leer la señal analógica del sensor de humo
    int humo = analogRead(pinHumo);

    // Si se detecta humo, enviar un mensaje de Telegram
    if (humo > umbralHumo) {
        String mensaje = "Se ha detectado humo!";
        myBot.sendMessage(msg.sender.id, mensaje);
    }

    // Esperar un tiempo antes de volver a leer el sensor
     delay(1000);
}