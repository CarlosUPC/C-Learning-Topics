#include <iostream>

int m_Variable = 5; //Declaraci�n y Definici�n de una variable

extern int m_Var2; //Declaraci�n de una variable -->Extern keyword = linkaje externo, es decir, es lo mismo con las declaraciones y definiciones de funciones, el linker cuando encuentre una llamada de esa variable buscara en otros cpp EXTERNOS al que se ya llamado para buscar su definici�n.

//Si su definici�n es static significar� que ser� invisible externamente porlo que el linker no la encontrar� xD, ojo con eso.

int main() {

	std::cout << m_Var2 << std::endl;
	std::cout << m_Variable << std::endl;
	std::cin.get();
}