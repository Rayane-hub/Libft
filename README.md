# Libft
Recréation de fonctions standard de la librairie C : mémoire, chaînes, pointeurs.
# 🧩 Libft

**Langage :** C  
**Concepts clés :** Gestion mémoire, manipulation de chaînes, pointeurs, fonctions de base

---

## 🎯 Objectif du projet
Recréer un ensemble de fonctions essentielles de la librairie standard du C (stdlib et string), afin d’acquérir une compréhension profonde du fonctionnement bas niveau du langage.

Ce projet constitue la première étape du cursus 42 et sert de fondation pour les projets suivants.

---

## ⚙️ Fonctionnalités principales
- Reproduction des fonctions standards : `strlen`, `strcpy`, `memcpy`, `atoi`, `calloc`, etc.  
- Implémentation de listes chaînées (`t_list`)  
- Respect de la norme 42 et gestion rigoureuse de la mémoire  

---

## 🧠 Compétences développées
- Compréhension de la gestion mémoire manuelle en C  
- Manipulation avancée des pointeurs  
- Organisation modulaire d’une bibliothèque de fonctions  
- Écriture de tests unitaires et débogage bas niveau  

---

## 🚀 Compilation et utilisation
```bash
make
Cela génère un fichier libft.a que vous pouvez inclure dans vos projets C :

c
Copier le code
#include "libft.h"
Puis compilez votre code avec :

bash
Copier le code
gcc main.c -L. -lft
📁 Structure du projet
Copier le code
libft/
│── Makefile
│── libft.h
│── ft_*.c
│── bonus/
│   └── ft_lst*.c
