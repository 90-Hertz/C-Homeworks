#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien{
	int maSinhVien;
	char hoTen[30];
	float diemChuyenCan;
	float diemBaiTap;
	float diemThucHanh;
	float diemGiuaKi;
	float diemCuoiKi;
	float diemQuaTrinh;
	float diemKiemTra;
	float diemHocPhan;
};

struct Lop{
	char tenLop[20];
	int siSo;
	SinhVien sinhVien[60];
};

void nhapLopVaSiSo(Lop &lop){
	cout << "Ten lop: "; cin.getline(lop.tenLop,20);
	do{
	cout << "Si so:"   ; cin >> lop.siSo;
	cin.ignore();
	}while(lop.siSo<0 || lop.siSo>60);
}

void nhapThongTinSinhVien(SinhVien &sinhVien){
	cout << "Ma sinh vien: "; cin >> sinhVien.maSinhVien;
	cin.ignore();
	cout << "Ho ten: "      ; cin.getline(sinhVien.hoTen,30);
}

void diemDanhVaDiemThanhPhan(SinhVien &sinhVien ){
	cout << "So buoi diem danh: "; cin >> sinhVien.diemChuyenCan;
	cout << "Diem bai tap: "     ; cin >> sinhVien.diemBaiTap;
	cout << "Diem thuc hanh: "   ; cin >> sinhVien.diemThucHanh;
	cout << "Diem giua ki: "     ; cin >> sinhVien.diemGiuaKi;
	cout << "Diem cuoi ki: "     ; cin >> sinhVien.diemCuoiKi;
}

void tinhDiemQuaTrinh(SinhVien &sinhVien){
	sinhVien.diemQuaTrinh = ( sinhVien.diemChuyenCan + sinhVien.diemBaiTap + sinhVien.diemThucHanh) / 3;
}

void tinhDiemKiemTra(SinhVien &sinhVien){
	sinhVien.diemKiemTra = sinhVien.diemGiuaKi * 3 / 7 + sinhVien.diemCuoiKi * 4 / 7;
}

void tinhDiemHocPhan(SinhVien &sinhVien){
	sinhVien.diemHocPhan = sinhVien.diemQuaTrinh * 0.3 + sinhVien.diemKiemTra * 0.7;
}

void sapXepTheoDiemHocPhanGiamDan(Lop &lop){
	for( int i=0 ; i<lop.siSo ; i++){
		for ( int j=0 ; j<lop.siSo ; j++){
			if(lop.sinhVien[i].diemHocPhan > lop.sinhVien[j].diemHocPhan){
				swap(lop.sinhVien[i] , lop.sinhVien[j]);
			}
		}
	}
}

void ketQuaHocTap(Lop &lop){
    cout << "Lop: " << lop.tenLop << endl;
    cout << "Si so: " << lop.siSo << endl;
    cout << "STT   |       Ho ten       |   MSSV   |  DQT  |  DKT  |  DHP  " << endl;
    cout << "--------------------------------------------------------------" << endl;
    
    for (int i = 0; i < lop.siSo; i++) {
        cout << left << setw(6)  << i << "|"
             << left << setw(20) << lop.sinhVien[i].hoTen        << "|"
             << left << setw(10) << lop.sinhVien[i].maSinhVien   << "|"
             << left << setw(7)  << lop.sinhVien[i].diemQuaTrinh << "|"
             << left << setw(7)  << lop.sinhVien[i].diemKiemTra  << "|"
             << left << setw(7)  << lop.sinhVien[i].diemHocPhan  << "|" << endl;
    }
}

void sinhVienDiemHocPhanLonHon(Lop &lop){
	cout << "Danh sach sinh vien co diem hoc phan lon hon 6.0 : ";
    cout << "STT   |       Ho ten       |   MSSV   |  DQT  |  DKT  |  DHP  " << endl;
    cout << "--------------------------------------------------------------" << endl;	
	for( int i=0 ; i<lop.siSo ; i++){
		if(lop.sinhVien[i].diemHocPhan >= 6.0 ){
			cout << left << setw(6)  << i << "|"
             << left << setw(20) << lop.sinhVien[i].hoTen        << "|"
             << left << setw(10) << lop.sinhVien[i].maSinhVien   << "|"
             << left << setw(7)  << lop.sinhVien[i].diemQuaTrinh << "|"
             << left << setw(7)  << lop.sinhVien[i].diemKiemTra  << "|"
             << left << setw(7)  << lop.sinhVien[i].diemHocPhan  << "|" << endl;
		}
	}
}

int main(){
	
	Lop lop;
	
	nhapLopVaSiSo(lop);
	
	for( int i=0 ; i<lop.siSo ; i++){
		nhapThongTinSinhVien(lop.sinhVien[i]);
		
		diemDanhVaDiemThanhPhan(lop.sinhVien[i]);
		
		tinhDiemQuaTrinh(lop.sinhVien[i]);
		
		tinhDiemKiemTra(lop.sinhVien[i]);
		
		tinhDiemHocPhan(lop.sinhVien[i]);
		
		cout << endl;
	}
	
	sapXepTheoDiemHocPhanGiamDan(lop);
	
	ketQuaHocTap(lop);
	
	cout << endl;
	sinhVienDiemHocPhanLonHon(lop);
	
	return 0;
}

