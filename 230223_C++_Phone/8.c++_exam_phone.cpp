#include "Kphone.h"

int main()
{
	//��ȭ�ɱ�
	{
		//��ȭ�⸦ ���
		Kphone* pKphone = new Kphone();

		//��ȭ��ȣ�Է�
		pKphone->Numbers("010-1234-5678");
		//�����ν�
		/*int* pAudio = new int[11] {
			0, 1, 2, 3, 4, 5, 6, 7, 8,
		};
		int length = 11;
		pKphone->Numbers(pAudio, length);*/

		//��ȭ�ɱ�
		pKphone->Send();

		pKphone->Cancel(); //revision 2.0

		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}

	}

	//��ȭ�ޱ�
	{
		//��ȭ�⸦ ���
		Kphone* pKphone = new Kphone();

		//��ȭ�ޱ�
		pKphone->Receive();

		pKphone->Cancel(); //revision 2.0

		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}
	}

	return 1;
}