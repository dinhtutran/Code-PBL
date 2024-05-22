#include<bits/stdc++.h>
using namespace std;
struct thongtin{
    string tenhang,gioitinh,kichthuoc,namsanxuat,nuocsanxuat,mausac;
    int gia,soluong,mahang;
};
class quanlitrangthai;
class xuatthongtinsp;
thongtin nhap1sanpham( ifstream & fin){
    thongtin x;
    string line;
    getline(fin, line);
    stringstream ss(line);
    string t;
    getline(ss, t, ',');
    x.mahang = stoi(t);
    getline(ss, t, ',');
    x.tenhang = (t);
    getline(ss, t, ',');
    x.gioitinh = (t);
    getline(ss, t, ',');
    x.kichthuoc = (t);
    getline(ss, t, ',');
    x.namsanxuat = (t);
    getline(ss, t, ',');
    x.nuocsanxuat = (t);
    getline(ss, t, ',');
    x.mausac = (t);
    getline(ss, t, ',');
    x.gia =stoi(t);
    getline(ss, t, ',');
    x.soluong = stoi(t);
    return x;
}
class ttkh{
    thongtin a[200];
    int size= 0;
public:
friend quanlitrangthai;
friend xuatthongtinsp;
    ttkh(){
        size=0;
    }
    void nhapthongtin(ifstream &fin){
        string line;
         while (!fin.eof()){
            a[size] = nhap1sanpham(fin);
             size++;
        }
    }
    void intt(){
        int s;
        bool check = false;
        cout <<"hãy nhập mã hàng bạn muốn có thông tin "<<endl;
            cin >> s;
            while (!check){
                for (int i =0; i<size ; i++){
                    if (a[i].mahang == s){
                        check = true;
                        cout<<"mã hàng : " <<a[i].mahang <<",";
                        cout<<"tên hàng : "<<a[i].tenhang <<",";
                        cout <<"giới tính : "<<a[i].gioitinh <<",";
                        cout <<"kích thước : "<<a[i].kichthuoc <<",";
                        cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                        cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                        cout <<"màu sắc : "<<a[i].mausac <<",";
                        cout <<"số lượng : "<<a[i].soluong<<",";
                        cout <<"giá thành : " <<a[i].gia <<endl;
                        break;
                    }
                }
                if (!check ){
                    cout <<"đã nhập sai hãy nhập lại :";
                    cin >> s; 
                }
            }
        }
    void intentheotenhang(){
        string s;
        cout <<"hãy nhập mã hàng bạn muốn có thông tin "<<endl;
            cin >> s;
            for (int i =0; i<size ; i++){
                if (a[i].tenhang == s){
                    cout<<"mã hàng : " <<a[i].mahang <<",";
                    cout<<"tên hàng : "<<a[i].tenhang <<",";
                    cout <<"giới tính : "<<a[i].gioitinh <<",";
                    cout <<"kích thước : "<<a[i].kichthuoc <<",";
                    cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                    cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                    cout <<"màu sắc : "<<a[i].mausac <<",";
                    cout <<"số lượng : "<<a[i].soluong<<",";
                    cout <<"giá thành : " <<a[i].gia <<endl;
                }
        }
    }
    void lockichthuoc(){
        string kichthuoc1;
        cin >> kichthuoc1;
        for (int i =0; i<size ; i++){
            if (a[i].kichthuoc == kichthuoc1){
                cout<<"mã hàng : " <<a[i].mahang <<",";
                cout<<"tên hàng : "<<a[i].tenhang <<",";
                cout <<"giới tính : "<<a[i].gioitinh <<",";
                cout <<"kích thước : "<<a[i].kichthuoc <<",";
                cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                cout <<"màu sắc : "<<a[i].mausac <<",";
                cout <<"số lượng : "<<a[i].soluong<<",";
                cout <<"giá thành : " <<a[i].gia <<endl;
                cout <<"--------------------------------------"<<endl;
            }
        }
    }
    void locgioitinh(){
        string gioitinh1;
        cin >> gioitinh1;
        for (int i =0; i<size ; i++){
            if (a[i].gioitinh == gioitinh1){
                cout<<"mã hàng : " <<a[i].mahang <<",";
                cout<<"tên hàng : "<<a[i].tenhang <<",";
                cout <<"giới tính : "<<a[i].gioitinh <<",";
                cout <<"kích thước : "<<a[i].kichthuoc <<",";
                cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                cout <<"màu sắc : "<<a[i].mausac <<",";
                cout <<"số lượng : "<<a[i].soluong<<",";
                cout <<"giá thành : " <<a[i].gia <<endl;
            }
        }
    }
    void locca2(){
        string kichthuoc1,gioitinh1;
        cin >> kichthuoc1 >> gioitinh1;
        for (int i =0; i<size ; i++){
            if (a[i].kichthuoc == kichthuoc1 && a[i].gioitinh == gioitinh1){
                cout<<"mã hàng : " <<a[i].mahang <<",";
                cout<<"tên hàng : "<<a[i].tenhang <<",";
                cout <<"giới tính : "<<a[i].gioitinh <<",";
                cout <<"kích thước : "<<a[i].kichthuoc <<",";
                cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                cout <<"màu sắc : "<<a[i].mausac <<",";
                cout <<"số lượng : "<<a[i].soluong<<",";
                cout <<"giá thành : " <<a[i].gia <<endl;
                 cout <<"--------------------------------------"<<endl;
            }
        } 
    }
    void xemsoluong(){
        int sol;
        cin >> sol;
        for (int i = 0 ; i< size ; i++){
            if (sol == a[i].mahang){
                if (a[i].soluong > 0 ){
                    cout <<" còn hàng " <<endl;
                     cout <<"--------------------------------------"<<endl;
                }
                else{
                     cout <<"đã hết hàng"<<endl;
                      cout <<"--------------------------------------"<<endl;
                }
            }
        }
    }
    void indstenhang(){
        for (int i = 0 ; i< size ; i++){
            cout <<i+1 <<" "<<a[i].tenhang<<endl;
        }
    }
    void xuatmausac(){
        for (int i = 0 ; i< size ; i++){
            cout  <<i+1 <<" "<<a[i].tenhang << " :" << a[i].mausac << endl;
        }
    }
    void xuatgiasp(){
        for (int i = 0 ; i< size ; i++){
            cout  <<i+1 <<" "<<a[i].tenhang << " :" << a[i].gia << endl;
        }
    }
    void xuatsoluong();
    void sapxeptheomahang();
    void timkiemtheotenhang();
    void xoathongtinhang();
    void chinhsuathongtin();
};
class quanlitrangthai{
    int nh;
public:
    quanlitrangthai(){
        nh=1;
    }
    void menutrangthai(ttkh h){
        while (nh != 0){
            cout <<"nhấn 0  để quay lại :"<<endl;
            cout <<"nhấn 1 để tìm kiếm sản phẩm theo tên mã hàng :"<<endl;
            cout <<"nhấn 2 để kiếm sản phẩm theo tên hàng :"<<endl;
            cout <<"nhấn 3 lọc thông tin theo giới tính hoặc theo kích thước : "<<endl;
            cout <<"nhấn 4 để hiển thị trạng thái của hàng :" <<endl;
            cout <<"hãy nhập lệnh của bạn :" << endl;
            cin >> nh;
            switch(nh){
                 case 1:
                    h.intt();
                    break;
                case 2:
                    h.intentheotenhang();
                    break;
                case 3:
                    cout <<"nhấn 1 để lọc theo giới tính "<<endl;
                    cout <<"nhấn 2 để lọc theo kích thước "<<endl;
                    cout <<"nhấn 3 để lọc theo cả 2" <<endl;
                    cout <<"hãy nhập lệnh của bạn :" <<endl;
                    cout <<"--------------------------------------"<<endl;
                    cout <<"--------------------------------------"<<endl;
                    int lenh2;
                    cin>>lenh2;
                    switch (lenh2){
                        case 1:
                            h.locgioitinh();
                            break;
                        case 2:
                            h.lockichthuoc();
                            break;
                        case 3:
                            h.locca2();
                            break;
                        default :
                            break;
                    }
                case 4:
                    h.xemsoluong();
                    break;
                default:
                    break;
            }
        }
    }
};
class xuatthongtinsp{
        int lenh3;
    public:
        xuatthongtinsp(){
            lenh3=1;
        }
        void menuxuat();
};
 void ttkh:: xuatsoluong(){
        for (int i = 0 ; i< size ; i++){
            cout  <<i+1 <<" "<<a[i].tenhang << " :" << a[i].soluong << endl;
        }
    }
void ttkh:: timkiemtheotenhang(){
    string ten;
    cout <<"hãy nhập tên hàng cần tìm";
    cin >> ten;
    bool found = false ;
    for (int i = 0 ; i< size ; i++ ){
        if (a[i].tenhang.find(ten) != string::npos ){
            found = true;
                cout<<"mã hàng : " <<a[i].mahang <<",";
                cout<<"tên hàng : "<<a[i].tenhang <<",";
                cout <<"giới tính : "<<a[i].gioitinh <<",";
                cout <<"kích thước : "<<a[i].kichthuoc <<",";
                cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                cout <<"màu sắc : "<<a[i].mausac <<",";
                cout <<"số lượng : "<<a[i].soluong<<",";
                cout <<"giá thành : " <<a[i].gia <<endl;
                cout <<"--------------------------------------"<<endl;
        }
    }
    if (!found){
        cout <<"không tìm thấy hàng cần tìm "<<endl;
        cout <<"--------------------------------------"<<endl;
    }
}
void xuatthongtinsp::menuxuat(){
         while(lenh3 != 0){
                cout <<"nhấn 0  để kết thúc :"<<endl;
                cout <<"nhấn 1 để danh sách tên hàng :"<<endl;
                cout <<"nhấn 2 để xem màu sắc của các mẫu hàng  :"<<endl;
                cout <<"nhấn 3 để xem giá của từng sản phẩm : "<<endl;
                cout <<"nhấn 4 để hiển thị số lượng của mỗi loại hàng :" <<endl;
                cout <<"hãy nhập lệnh của bạn :" <<endl;
                cout <<"--------------------------------------"<<endl;
                cout <<"--------------------------------------"<<endl;
                cin >> lenh3;
                ttkh h3;
                switch (lenh3){
                    case 1:
                        h3.indstenhang();
                        break;
                    case 2:
                        h3.xuatmausac();
                        break;
                    case 3:
                        h3.xuatgiasp();
                        break;
                    case 4:
                        h3.xuatsoluong();
                        break;
                    default:
                        cout<<"đã nhập sai hãy nhập lại : "<<endl;
                        break;
                }
            }
        }
void ttkh ::xoathongtinhang(){
    for (int i =0; i<size ; i++){
                        cout<<"mã hàng : " <<a[i].mahang <<",";
                        cout<<"tên hàng : "<<a[i].tenhang <<",";
                        cout <<"giới tính : "<<a[i].gioitinh <<",";
                        cout <<"kích thước : "<<a[i].kichthuoc <<",";
                        cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                        cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                        cout <<"màu sắc : "<<a[i].mausac <<",";
                        cout <<"số lượng : "<<a[i].soluong<<",";
                        cout <<"giá thành : " <<a[i].gia <<endl;
                    }
    int muonxoa ;
    cout<<"hãy nhập số lượng hàng muốn xóa";
    cin >> muonxoa;
    while (muonxoa > size ){
        cout <<"số lượng hàng muốn xóa không hợp lệ, hãy nhập lại :" <<endl;
        cin >> muonxoa;
    }
    int maxoa;
    while (muonxoa--){
        cout <<"hãy nhập mã hàng muốn xóa "<<endl;
        cin >> maxoa ;
        for (int i = 0 ; i < size ; i++){
            if ( maxoa == a[i].mahang ){
                swap(a[i],a[size-1]);
                size--;
            }
        }
    }
    for (int i =0; i<size ; i++){
                        cout<<"mã hàng : " <<a[i].mahang <<",";
                        cout<<"tên hàng : "<<a[i].tenhang <<",";
                        cout <<"giới tính : "<<a[i].gioitinh <<",";
                        cout <<"kích thước : "<<a[i].kichthuoc <<",";
                        cout <<"năm sản xuất : "<<a[i].namsanxuat <<",";
                        cout <<"nước sản xuất : "<<a[i].nuocsanxuat <<",";
                        cout <<"màu sắc : "<<a[i].mausac <<",";
                        cout <<"số lượng : "<<a[i].soluong<<",";
                        cout <<"giá thành : " <<a[i].gia <<endl;
                    }
}
void ttkh::chinhsuathongtin(){
    int tenmahang;
    int vitricansua;
    string thongtinchinhsua;
    while (tenmahang != 0 ){
        cout<<"hãy nhập 0 để quay lại mục trước : "<<endl;
        cout <<"hãy nhập mã tên hàng cần chỉnh sữa : ";
        cout <<"--------------------------------------"<<endl;
        cin >> tenmahang;
        for (int i =0 ; i < size ; i++ ){
            if (a[i].mahang == tenmahang){
                vitricansua = i;
                break;
            }
        }
        cout <<"hãy nhập loại thông tin cần chỉnh sửa : ";
        cin >> thongtinchinhsua ;
        if ( thongtinchinhsua == "gia"){
            int gia;
            cin>>gia;
            a[vitricansua].gia = gia;
        }
        else {
            if ( thongtinchinhsua == "soluong"){
                int soluong;
                cin >> soluong;
                a[vitricansua].soluong = soluong;
            }
            else{
                if ( thongtinchinhsua == "kichthuoc"){
                    string kichthuoc;
                    cin >> kichthuoc;
                    a[vitricansua].kichthuoc = kichthuoc;
                }
                else {
                    if ( thongtinchinhsua == "gioitinh"){
                        string gioitinh;
                        cin >> gioitinh;
                        a[vitricansua].gioitinh = gioitinh ;
                    }
                    else{
                        if (thongtinchinhsua == "mausac" ){
                            string mausac;
                            cin>>mausac;
                            a[vitricansua].mausac = mausac;
                        }
                        else cout<<"không có loại thông tin này";
                    }
                }
            }
        }
    }
}
class tienich{
    int lenh4;
public:
    tienich(){
        lenh4 = 1;
    }
    void menutienich(ifstream &fin){
        ttkh h;
        cout<<"nhấn 0 để quay trở lại ban đầu : "<<endl;
        cout <<"nhấn 1 để thêm thông tin hàng hóa :"<<endl;
        cout <<"nhấn 2 để xóa thông tin khách hàng :" <<endl;
        cout <<"nhấn 3 để chỉnh sửa thông tin của hàng hóa :"<<endl;
        cout <<"--------------------------------------"<<endl;
        cout <<"--------------------------------------"<<endl;
        while(lenh4 != 0){
            cin >> lenh4;
            switch(lenh4){
                case 1:
                    h.nhapthongtin(fin);
                    break;
                case 2:
                    h.xoathongtinhang();
                case 3:
                    h.chinhsuathongtin();
                    break;
            }
        }
    }
};
int main(){
    int lenh ;
    ifstream fin("InitialInfo.csv");
    ifstream fin1("Book1.csv");
    ttkh hh;
    quanlitrangthai hang1;
    tienich ti;
    while (true){
        cout <<"nhấn 0  để kết thúc :"<<endl;
        cout <<"nhấn 1 để nhập dữ liệu hàng hóa :"<<endl;
        cout <<"nhấn 2 để xem thông tin hàng hóa :"<<endl;
        cout <<"nhấn 3 để xem trang thái của hàng hóa : "<<endl;
        cout <<"nhấn 4 để sử dụng 1 số tiện ích :" <<endl;
        cout <<"hãy nhập lệnh của bạn :" <<endl;
        cout <<"--------------------------------------"<<endl;
        cout <<"--------------------------------------"<<endl;
        cin >> lenh;
        if (lenh == 0){
            break;
        }
        switch (lenh){
            case 1:
                hh.nhapthongtin(fin);
                cout <<"Đã nhập dữ liệu"; 
                break;
            case 2:
                hh.timkiemtheotenhang();
                break;
            case 3:
                hang1.menutrangthai(hh);
                break;
            case 4:
                ti.menutienich(fin1);
                break;
            default :
                cout <<"hay nhap lai : ";
        }
    }
    return 0;
}
