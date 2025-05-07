# Módulos C++ 00–05 
> Esta serie de módulos forma parte del proyecto de introducción a C++ en el programa de la escuela 42. Cada módulo introduce nuevos conceptos del lenguaje, desde la programación orientada a objetos básica hasta temas más avanzados como sobrecarga de operadores, herencia y manejo de excepciones.

---

## 🧩 Contenido de los Módulos

### 📦 Módulo 00 – Fundamentos de C++

**Temas cubiertos:**
- Compilación en C++
- Tipos primitivos, referencias
- Funciones, namespaces
- Creación y manejo de clases simples

**Ejercicios destacados:**
- Reimplementación de funciones básicas (como `megaphone`)
- Primeras clases con atributos privados y funciones públicas

---

### 🧱 Módulo 01 – Orientación a Objetos

**Temas cubiertos:**
- Construcción y destrucción de objetos
- Constructores por copia
- `this` pointer
- Gestión de memoria estática y dinámica

**Ejercicios destacados:**
- Contact book (`PhoneBook`)
- Introducción a `new` y `delete`

---

### ⚙️ Módulo 02 – Encapsulación y Polimorfismo

**Temas cubiertos:**
- Clases de tipo "Fixed Point"
- Encapsulación correcta
- Sobrecarga de operadores (`operator+`, `operator<<`, etc.)

**Ejercicios destacados:**
- Implementación de una clase `Fixed`
- Comparaciones, incrementos, operaciones aritméticas

---

### 🧠 Módulo 03 – Herencia

**Temas cubiertos:**
- Herencia simple
- Constructores en la herencia
- Resolución de ambigüedad
- Clases derivadas y funciones miembro

**Ejercicios destacados:**
- Creación de clases como `ClapTrap`, `ScavTrap`
- Métodos heredados y redefinidos

---

### 🔗 Módulo 04 – Herencia Múltiple y Virtual

**Temas cubiertos:**
- Herencia múltiple
- Virtual inheritance
- Diamond problem
- Castings (`dynamic_cast`, `reinterpret_cast`, etc.)

**Ejercicios destacados:**
- `DiamondTrap` y manejo del diamante de la muerte
- Polimorfismo correcto y resolución de ambigüedad

---

### 🚨 Módulo 05 – Interfaces y Excepciones

**Temas cubiertos:**
- Clases abstractas
- Métodos virtuales puros
- Manejadores de excepciones (`try`, `catch`, `throw`)
- Excepciones personalizadas

**Ejercicios destacados:**
- Jerarquía de clases con interfaz base
- Uso de `try/catch` y lanzado de excepciones

---

## 🧪 Cómo Compilar y Ejecutar

Cada módulo contiene sus propios ejercicios. En general, puedes compilar los archivos fuente con:

```bash
c++ -Wall -Wextra -Werror -std=c++98 main.cpp -o program
