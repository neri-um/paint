# 📷 Image & Video Processor (OpenCV + Qt)

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Qt](https://img.shields.io/badge/Qt-41CD52?style=for-the-badge&logo=qt&logoColor=white)
![OpenCV](https://img.shields.io/badge/OpenCV-5C3EE8?style=for-the-badge&logo=opencv&logoColor=white)

Aplicación de escritorio completa para el procesamiento digital de imágenes y vídeo. Desarrollada como parte de la asignatura de **Informática Gráfica** (4º GII), este proyecto integra la potencia de cálculo de **OpenCV** con una interfaz gráfica amigable en **Qt Creator**.

---

## 📸 Funcionalidades

El software permite la manipulación de medios visuales a través de una arquitectura modular:

### 1. Gestión de Entradas/Salidas
* **Soporte Multiformato:** Apertura y guardado de imágenes en formatos estándar.
* **Captura en Tiempo Real:** Interfaz para captura directa desde webcam con previsualización.
* **Procesamiento de Vídeo:** Lectura y extracción de frames desde archivos de vídeo.

### 2. Edición y Herramientas Gráficas
* **Análisis de Imagen:** Visualización de **histogramas** (Escala de grises y RGB) para análisis de exposición y color.
* **Herramientas de Dibujo:** Implementación de primitivas gráficas (Punto, Línea, Rectángulo, Elipse) con control de radio, color y difuminado.
* **Pincel "Arco Iris":** Herramienta dinámica con variación automática de color.
* **Gestión de ROI:** Selección y manipulación de Regiones de Interés (Region of Interest).

### 3. Transformaciones Matemáticas y de Color
* **Ajustes Tonales:** Control lineal de Brillo, Contraste y Gama.
* **Espacios de Color:** Conversión y manipulación entre espacios **RGB, HSV y HLS** (Matiz, Saturación, Luminosidad).
* **Transformaciones Geométricas:**
    * Corrección de **Perspectiva** (Homografías mediante selección de 4 puntos).
    * Operaciones aritméticas entre imágenes (Media ponderada).

### 4. Filtros y Visión Artificial
* **Convoluciones:** Aplicación de filtros de suavizado (Gaussiano, Media, Mediana).
* **Efectos Artísticos y de Distorsión:**
    * Filtro de **Bajorrelieve** (detección de bordes direccional).
    * Efecto geométrico de **Pinchar/Estirar** (Distorsión radial).
* **Inpainting:** Restauración de imágenes y eliminación de objetos no deseados mediante algoritmos de reconstrucción.

### 5. Generación y Efectos de Vídeo
* **Efecto "Star Wars":** Generación de vídeo con texto en desplazamiento de perspectiva.
* **Transiciones y Rotaciones:** Algoritmos para generar secuencias de vídeo a partir de transformaciones de imágenes estáticas.
* **Promediado Temporal:** Cálculo de la imagen media a partir de una secuencia de vídeo.

---

## 🛠️ Tecnologías Utilizadas

* **Lenguaje:** C++
* **GUI Framework:** Qt 5 / Qt 6
* **Visión por Computador:** OpenCV (Open Source Computer Vision Library)
* **Entorno:** Qt Creator

## 🚀 Instalación y Despliegue

1. Clonar el repositorio:
   ```bash
   git clone [https://github.com/tu-usuario/nombre-repo.git](https://github.com/neri-um/paint.git)
