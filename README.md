# 🔢 Display de 7 Segmentos con Técnicas Digitales y Arduino UNO

## 📌 Descripción

Este proyecto fue desarrollado en el marco de la materia **Técnicas Digitales**, con el objetivo de integrar el análisis lógico con la implementación práctica utilizando un microcontrolador Arduino UNO.

El sistema permite controlar un display de 7 segmentos de cátodo común, mostrando de forma secuencial los números del 0 al 9, seguidos de las vocales A, E, I, O y U. El avance de la secuencia se realiza mediante un botón, y el sistema se apaga al finalizar el ciclo, reiniciándose únicamente con una nueva pulsación.

---

## 🎯 Objetivos

### Objetivo General

Desarrollar un sistema digital capaz de controlar un display de 7 segmentos combinando técnicas digitales clásicas con programación en Arduino.

### Objetivos Específicos

* Diseñar la tabla de verdad para cada segmento del display
* Aplicar mapas de Karnaugh para simplificar funciones lógicas
* Implementar el circuito lógico en simulación (Proteus)
* Construir el sistema físico con Arduino UNO
* Programar la secuencia de caracteres con control por botón

---

## ⚙️ Tecnologías Utilizadas

* Arduino UNO
* Display de 7 segmentos (cátodo común)
* Resistencias (220Ω y 10kΩ)
* Pulsador
* Software Proteus (simulación)
* Arduino IDE

---

## 🧠 Funcionamiento del Sistema

1. Se define una tabla de verdad para números y vocales
2. Se simplifican las funciones mediante mapas de Karnaugh
3. Se implementa el circuito lógico con compuertas AND, OR y NOT en Proteus
4. Se simula el funcionamiento completo del sistema
5. Se realiza el montaje físico con Arduino
6. El usuario controla la secuencia mediante un botón

---

## 🔌 Conexión del Hardware

* Cada segmento del display se conecta a un pin digital del Arduino
* El cátodo común se conecta a GND
* Se utiliza una resistencia de 220Ω por segmento
* El botón se conecta a un pin digital con resistencia pull-down de 10kΩ

---

## 💡 Lógica del Proyecto

Cada segmento del display (A–G) se controla mediante funciones lógicas obtenidas a partir de:

* Tabla de verdad
* Mapas de Karnaugh

Esto permite minimizar la cantidad de compuertas necesarias y optimizar el diseño del circuito.

---

## ⚠️ Problema y Solución

Durante la simulación, surgió la necesidad de utilizar compuertas OR con múltiples entradas, las cuales no estaban disponibles directamente en Proteus.

**Solución:**
Se implementaron combinaciones de compuertas OR de menor cantidad de entradas para lograr el mismo resultado lógico.

---

## 📊 Resultados

* Correcta visualización de números y vocales
* Funcionamiento estable en simulación y hardware real
* Control completo mediante pulsador
* Integración exitosa entre lógica digital y programación

---

## 🧾 Conclusiones

El proyecto permitió integrar conocimientos teóricos y prácticos, demostrando que las técnicas digitales clásicas pueden aplicarse de manera efectiva en sistemas modernos basados en microcontroladores.

Se logró comprender el proceso completo:

* Análisis lógico
* Simulación
* Implementación física

Esto proporciona una visión integral del desarrollo de sistemas electrónicos.

---

## 📸 Evidencias

* Tabla de verdad
* Mapas de Karnaugh
* Simulación en Proteus
* Montaje físico
* Código en Arduino

---

## 👩‍💻 Autora

**Luciana Mariel Zapana**
Tecnicatura Universitaria en Automatización y Robótica
