//3장 12번
class Ram {
private:
	char mem[100 * 1024];
	int size;

public:
	Ram() { memset(mem, '0', 100 * 1024);}
	~Ram() { cout << "메로리 제거됨"; }

	char read(int address) {//address 즈소의 메로리 바이트 리턴
		return mem[address];
	}

	void write(int address, char value) {//address 주소에 한 바이트로 vlaue저장
		mem[address] = value;
	}
};

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);

	char res = ram.read(100) + ram.read(101);

	ram.write(102, res);
	
	cout << "102번지의 값 = " << (int)ram.read(102) << endl;
}
