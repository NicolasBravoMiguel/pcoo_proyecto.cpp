Proyecto Bar POO

Introducción

Este proyecto es un sistema de gestión de bebidas desarrollado en C++ que utiliza los principios 
de la programación orientada a objetos. El sistema está diseñado para administrar dos tipos 
principales de bebidas: alcohólicas y no alcohólicas, cada una con sus características y 
funcionalidades específicas.

Descripción del Sistema

El sistema permite gestionar bebidas alcohólicas y no alcohólicas con diferentes características.
Para las bebidas alcohólicas, se maneja el grado de alcohol, tipo de alcohol y aroma, además de incluir 
una verificación de edad y advertencias de consumo. En el caso de las bebidas no alcohólicas, se 
gestiona el sabor y temperatura, permitiendo diferentes niveles de hielo que van desde sin hielo 
(temperatura ambiente) hasta mucho hielo (temperatura muy fría).

Manejo de Tamaños y Precios

Se ofrecen tres tamaños diferentes para todas las bebidas: chico (250ml), mediano (500ml) y grande (750ml).
El sistema de precios está estructurado con un precio base que varía según el tipo de bebida: las bebidas
alcohólicas tienen un precio base de $14, mientras que las no alcohólicas tienen un precio base de $8. Los 
precios se ajustan según el tamaño seleccionado, con el tamaño mediano costando 1.5 veces el precio base y 
el grande 2 veces el precio base.

Funcionalidades Principales

El sistema incluye un conjunto completo de funcionalidades para la gestión de bebidas. Los usuarios pueden
agregar nuevas bebidas al carrito, tanto alcohólicas como no alcohólicas, visualizar los detalles de las
bebidas disponibles y eliminar bebidas del carrito. El carrito de compras permite ver las bebidas seleccionadas, 
calcular el total a pagar y procesar las órdenes.

Características Especiales

Una característica destacada del sistema es su capacidad para filtrar bebidas por categoría, permitiendo 
a los usuarios ver específicamente las bebidas alcohólicas o no alcohólicas. Además, incluye medidas de 
seguridad como la verificación de edad para la compra de bebidas alcohólicas y la validación de todas las 
entradas del usuario para garantizar el correcto funcionamiento del sistema.

Estructura del Proyecto

El proyecto está organizado en varios componentes principales. La base del sistema es una clase abstracta 
Bebida, de la cual se derivan las clases específicas para bebidas alcohólicas y no alcohólicas. El sistema 
también incluye una clase Menu que gestiona toda la funcionalidad del carrito de compras y la interacción con el usuario.

Instrucciones de Uso

Para utilizar el sistema, los usuarios interactúan con un menú principal que ofrece diversas opciones. Pueden 
agregar bebidas al carrito, especificando sus características como tamaño, temperatura y otros detalles relevantes.
El sistema permite visualizar el contenido del carrito en cualquier momento, realizar filtrados por tipo de bebida
y procesar órdenes cuando estén listos para finalizar la compra.

