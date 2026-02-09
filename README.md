# repo_prueba_infor

# 💅 Guía de Supervivencia: Git & GitHub para el Team

¡Holis, equipo! ✨

Bienvenidas al **Cuartel General** de nuestro proyecto. He creado esto para que dejemos de sufrir pasándonos `.zip` por correo como si estuviéramos en 2005. Aquí venimos a programar, a servir código limpio y a aprobar con notaza.

Aquí os dejo los **Básicos de la Vida** para que nadie rompa nada (porfi 🙏).

---

## 🧠 Diccionario para no perderse (Concepts 101)

### 1. 🌳 Las Ramas (`Branches`) = El Multiverso
Imagina que la rama **`main`** es la "Línea Temporal Sagrada". En esa rama **TODO TIENE QUE FUNCIONAR**.
* **Prohibido** subir código roto a `main`.
* **¿Qué hacemos entonces?** Cada una crea su propia realidad paralela (su propia rama).
    * Ejemplo: `rama-gabri`, `rama-fix-errores`.
    * Ahí puedes romper lo que quieras, que no afecta a las demás. Cuando tu código esté *gucci*, lo fusionamos con la principal.

### 2. 🚫 El `.gitignore` = El Portero de Discoteca
Este archivo es el segurata del repo. Le dice a Git qué archivos son "basura" y NO deben subir a la nube.
* **¿Qué ignora?** Archivos `.exe`, carpetas de configuración raras (`.vscode`, `.DS_Store`), y binarios compilados.
* **¿Por qué?** Porque solo queremos el **CÓDIGO FUENTE** (.cpp, .h). Lo demás sobra y ensucia.

### 3. 📜 El `README.md` = La Carta de Presentación
Es esto que estás leyendo. La portada del proyecto. Aquí explicamos qué hace nuestro código y cómo se ejecuta. Si no hay README, el proyecto es un NPC sin historia.

---

## 💃 El Ritual de Trabajo (Workflow)

Cada vez que os pongáis a currar, seguid estos pasos sagrados:

1.  **Actualízate, amix:** Antes de escribir nada, bájate lo último que haya subido el resto.
    ```bash
    git pull origin main
    ```

2.  **Crea tu espacio seguro (Tu rama):**
    ```bash
    git checkout -b nombre-de-tu-rama
    ```

3.  **Programa y rompe cosas:** Escribe tu código, toma tu café, llora un poco si no compila... ☕😭

4.  **Guarda la partida (Add & Commit):**
    ```bash
    git add .
    git commit -m "Explicación breve de qué has hecho (ej: arreglado el bug del centroide)"
    ```

5.  **Súbelo a la nube (Push):**
    ```bash
    git push origin nombre-de-tu-rama
    ```

---

## 🎮 Zona de Pruebas (Playground)

He subido un archivo llamado **`codigo_prueba.cpp`**.
* **Misión:** Descargar el repo, crear una rama vuestra, cambiarle algo a ese archivo (añadir vuestro nombre o un `cout` gracioso) y subirlo.

¡A darle caña, que somos unas *motomamis* de la ingeniería! 🏍️💃
