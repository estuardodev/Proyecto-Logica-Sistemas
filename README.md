# Proyecto Universitario

Este repositorio de GitHub tiene como objetivo contener el proyecto de domótica que utiliza la plataformaArduino, el cual se desarrolla en el marco de un proyecto universitario.

<p align="center">
<img src="./umg.png" alt="Logotipo de la Universidad Mariano Galvez de Guatemala">
</p>

<div align="center">

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino](https://img.shields.io/badge/Arduino-C%2B%2B-blue.svg)](https://www.arduino.cc/reference/en/)
[![Version](https://img.shields.io/badge/Version-1.0.0-blue)](CHANGELOG.md)
[![Contributors](https://img.shields.io/github/contributors/estuardodev/Proyecto-Logica-Sistemas)](https://github.com/estuardodev/Proyecto-Logica-Sistemas/graphs/contributors)

</div>

## Información General

En este proyecto se han empleado librerías externas bajo la licencia de código abierto de ArduinoJSON y CBot, siendo propiedad de sus respectivos autores. Asimismo, se ha utilizado la librería ESP8266 para Arduino con el fin de operar ciertos módulos sin alterar el código original, y se ha atribuido el crédito en la sección correspondiente a las bibliotecas utilizadas.

## Proyecto

Este proyecto se centra en el diseño de un sistema que, mediante la utilización de un sensor de humo, permita detectar incendios en un espacio determinado. Una vez detectada la presencia de humo, se envía una señal al microcontrolador Arduino, el cual activa una bomba de agua para extinguir el fuego. Además, el sistema envía una notificación a través de un bot de Telegram para alertar a los usuarios sobre la presencia de un incendio.
En la implementación del proyecto de detección y extinción de incendios se han utilizado los siguientes componentes y herramientas:

- Plataforma Arduino UNO
- Adaptador USB a ESP8266
- Bomba de agua

Además, se han empleado las siguientes librerías: ArduinoJSON y CBot, y se ha integrado el uso de un bot de Telegram para el envío de notificaciones.

## Instrucciones de Uso

Para utilizar este proyecto, sigue los siguientes pasos:

1. Descarga el repositorio a tu ordenador.
2. Abre el archivo ProyectoArduino.ino en el IDE de Arduino.
3. En la sección ssid y password, ingresa los datos correspondientes a tu red WiFi para que el ESP8266 pueda conectarse a ella.
4. En la sección token, ingresa el token correspondiente a tu bot de Telegram para poder enviar las notificaciones.
5. Si deseas personalizar el mensaje de notificación, modifica el código correspondiente en el loop.
6. Verifica que los pines utilizados por los componentes sean los correctos.
7. Conecta el ESP8266 a la placa Arduino y conecta la bomba de agua al pin correspondiente.
8. Sube el código al microcontrolador y verifica que se esté ejecutando correctamente.

Ten en cuenta que si deseas realizar cambios adicionales al proyecto, deberás tener conocimientos en programación básica y electrónica para poder llevarlos a cabo. Adicional a esto, el código del archivo esta totalmente documentado para apoyarte a entender como funciona el proyecto.

## Créditos

Este proyecto no sería posible sin el uso de las siguientes herramientas y librerías de código abierto:

- [CTBot](https://github.com/shurillu/CTBot "CTBot") - Biblioteca para la integración de bots de Telegram en proyectos de Arduino.
- [ESP8266 for Arduino](https://github.com/esp8266/Arduino "ESP8266") - Plataforma para el desarrollo de proyectos con microcontroladores ESP8266 y ESP32.
- [ArduinoJSON](https://github.com/bblanchon/ArduinoJson "ArduinoJSON") - Biblioteca para la manipulación de datos en formato JSON en proyectos de Arduino.
  Agradecemos a los autores de estas herramientas y librerías por su trabajo y dedicación en la creación y mantenimiento de estas herramientas de código abierto, las cuales han sido fundamentales en el desarrollo de este proyecto.

## Autores

- <a href="https://github.com/estuardodev" target="_blank">Estuardo Ramírez</a>
- <a href="https://github.com/AliciaSazo" target="_blank">Alicia Sazo</a>
- Estiv Sarpec
- José Leal
- Lesly Sián
