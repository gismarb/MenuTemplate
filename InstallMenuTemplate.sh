#! /usr/bin/env bash
# Criado em 01/05/2019

nome_programa="Menu"

title 
clear

echo
echo "  --------------- Instalador $nome_programa ---------------"
echo

date +%H:%M:%S

echo "  --> Iniciando a Instalacao do $nome_programa, aguarde..."
echo

sleep 5
g++ main.cpp MenuTemplate/MenuTemplate.cpp MenuTemplate/Entry.cpp MenuTemplate/ExternFunctions/getChar.cpp -o Menu 2> null

date +%H:%M:%S

echo "  --> Finalizando a Instalacao. Sera criado o arquivo $nome_programa em: "
pwd

sleep 5
echo
date +%H:%M:%S

echo "  --> Para utilizar, inicialmente digite ./$nome_programa"
echo
#cleaning trash
#rm null
read -p "Pressione qualquer tecla para sair do Instalador..."
echo

sleep 5

