# 📝 1. Dos sumas (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/two-sum/)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Array, Tabla hash

### 🚀 Performance
- **Runtime:** N/A
- **Memory:** N/A

---

### 📜 Problem Description

Se le proporciona una matriz de números enteros `nums`  y un número entero `target` , devuelve *índices de los dos números tales que suman `target`*  .

Puede asumir que cada entrada tendría ***exactamente*  una solución**  y no puede utilizar el *mismo*  elemento dos veces.

Puedes devolver la respuesta en cualquier orden.

**Ejemplo 1:**

```
Entrada: nums = [2,7,11,15], objetivo = 9

Salida: [0,1]

Explicación: Como nums[0] + nums[1] == 9, devolvemos [0, 1].

```

**Ejemplo 2:**

```
Entrada: nums = [3,2,4], objetivo = 6

Salida: [1,2]

```

**Ejemplo 3:**

```
Entrada: nums = [3,3], objetivo = 6

Salida: [0,1]

```

**Restricciones:**

	
- `2 <= nums.length <= 104`
	
- `-109 <= nums[i] <= 109`
	
- `-109 <= target <= 109`
	
- **Sólo existe una respuesta válida.**

 **Seguimiento:**  ¿Puedes idear un algoritmo que tenga una complejidad menor que el tiempo? `O(n2)`