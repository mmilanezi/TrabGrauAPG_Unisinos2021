
#include <GLFW/glfw3.h>
#include <glad/glad.h>

class player
{

	void pula() {
		//metodo que executa ação de pular
	}

	void anda_left() {
		//metodo que executa ação de andar para a esquerda
		// Habilitar o uso de texturas
		glEnable(GL_TEXTURE_2D);
		// Definir a forma de armazenamento dos pixels na textura (1= alinhamento por byte)
		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		// Definir quantas texturas serão usadas no programa
		GLuint texture_id[1]; // vetor com os números das texturas
		glGenTextures(1, texture_id);  // 1 = uma textura;
										// texture_id = vetor que guarda os números das texturas

		// Definr o número da textura do cubo.
		texture_id[0] = 1001;

		// Define a textura corrente
		glBindTexture(GL_TEXTURE_2D, texture_id[0]);
		// GL_TEXTURE_2D ==> define que será usada uma textura 2D (bitmaps)
		// texture_id[CUBE_TEXTURE]  ==> define o número da textura

		// carrega a uma imagem TGA

	}

	void anda_rigth() {
		//metodo que executa ação de andar para a direita

	}

};

