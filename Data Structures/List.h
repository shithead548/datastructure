template <class T> class List
{
	void clear();    //�ÿ����Ա�
	bool isEmpty();  //���Ա�Ϊ��ʱ������true
	bool append(const T value);  //�ڱ�β���һ��Ԫ��value����ĳ�����1
	bool insert(const int p, const T  value);  //��λ�� p �ϲ���һ��Ԫ�� value����ĳ����� 1
	bool remove(const int p);  //ɾ��λ�� p �ϵ�Ԫ�أ���ĳ��ȼ� 1
	bool getPos(int& p, const T value);  //����ֵΪ value ��Ԫ�ز�������λ��
	bool getValue(const int p, T& value);  //��λ�� p Ԫ��ֵ���ص����� value
	bool setValue(const int p, const T value);  // �� value �޸�λ�� p ��Ԫ��ֵ
};