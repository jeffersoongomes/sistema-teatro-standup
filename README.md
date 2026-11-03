# Sistema de Bilheteira de Teatro - Stand-up Comedy

Projeto desenvolvido em **Linguagem C** para simular o sistema de gestão, reserva e venda de bilhetes para um show de stand-up comedy num teatro.

## 🚀 Funcionalidades
* **Mapa de Assentos em Tempo Real:** Exibição da grelha de lugares com estado de cada poltrona (Livre `[L]` ou Ocupado `[X]`).
* **Venda e Bloqueio de Assentos:** Escolha de fila e coluna com verificação de disponibilidade para impedir reservas duplicadas.
* **Relatório Financeiro:** Balanço dinâmico com a quantidade de bilhetes vendidos e o faturamento total acumulado (R$).

## 🛠️ Conceitos Utilizados
* Matrizes bidimensionais (`char teatro[LINHAS][COLUNAS]`)
* Estruturas de controlo e laços de repetição (`do-while`, `switch-case`)
* Funções modulares para organização do código
* Validação de entradas de dados no terminal

## 💻 Como Compilar e Executar
```bash
# Compilar o código
gcc main.c -o standup

# Executar o programa
./standup
