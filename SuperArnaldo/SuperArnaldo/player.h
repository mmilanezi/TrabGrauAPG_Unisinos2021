
#include <GLFW/glfw3.h>
#include <glad/glad.h>

class player
{

	void pula() {
		//metodo que executa a��o de pular
	}

	void anda_left() {
		//metodo que executa a��o de andar para a esquerda
		// Habilitar o uso de texturas
		glEnable(GL_TEXTURE_2D);
		// Definir a forma de armazenamento dos pixels na textura (1= alinhamento por byte)
		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		// Definir quantas texturas ser�o usadas no programa
		GLuint texture_id[1]; // vetor com os n�meros das texturas
		glGenTextures(1, texture_id);  // 1 = uma textura;
										// texture_id = vetor que guarda os n�meros das texturas

		// Definr o n�mero da textura do cubo.
		texture_id[0] = 1001;

		// Define a textura corrente
		glBindTexture(GL_TEXTURE_2D, texture_id[0]);
		// GL_TEXTURE_2D ==> define que ser� usada uma textura 2D (bitmaps)
		// texture_id[CUBE_TEXTURE]  ==> define o n�mero da textura

		// carrega a uma imagem TGA

	}

	void anda_rigth() {
		//metodo que executa a��o de andar para a direita

	}

};

