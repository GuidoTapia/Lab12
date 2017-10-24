#include <iostream>

using namespace std;
/*La clase base sera la clase A, la cual contiene tres datos: uno publico, uno protegido y uno privado*/
class A{
private:
    int datoprivado;
protected:
    int datoprotegido;
public:
    int datopublico;
    A(const int x,const int y,const int z):datoprivado(x),datoprotegido(y),datopublico(z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        cout << datoprivado<<endl;
    }
};
/*La clase B hereda de forma publica de A, asimismo permite acceder libremente a dato publico, a dato protegido
solo se puede acceder en una instancia dentro de la clase, y no se puede acceder de ninguna forma a dato privado*/
class B:public A{
public:
    B(const int x,const int y,const int z):A(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase C hereda de forma protegida de A, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class C:protected A{
public:
    C(const int x,const int y,const int z):A(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase D hereda de forma privada de A, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class D:private A{
public:
    D(const int x,const int y,const int z):A(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase E hereda de forma publica de B, asimismo permite acceder libremente a dato publico, a dato protegido
solo se puede acceder en una instancia dentro de la clase, y no se puede acceder de ninguna forma a dato privado*/
class E:public B{
public:
    E(const int x,const int y,const int z):B(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase F hereda de forma privada de B, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class F:protected B{
public:
    F(const int x,const int y,const int z):B(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase G hereda de forma privada de B, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class G:private B{
public:
    G(const int x,const int y,const int z):B(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase H hereda de forma privada de C, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class H:public C{
public:
    H(const int x,const int y,const int z):C(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase I hereda de forma privada de C, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class I:protected C{
public:
    I(const int x,const int y,const int z):C(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase J hereda de forma privada de C, asimismo permite acceder a dato publico y dato protegido en una instancia
dentro de la clase mas no de forma externa, y no se puede acceder de ninguna forma a dato privado*/
class J:private C{
public:
    J(const int x,const int y,const int z):C(x,y,z){}
    virtual void imprimir(){
        cout << datopublico<<endl;
        cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase K hereda de forma publica de D, y no puede acceder a ningun dato de la clase base "A" debido a que D
lo heredo de forma privada*/
class K:public D{
public:
    K(const int x,const int y,const int z):D(x,y,z){}
    virtual void imprimir(){
        //cout << datopublico<<endl;
        //cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase L hereda de forma protegida de D, y no puede acceder a ningun dato de la clase base "A" debido a que D
lo heredo de forma privada*/
class L:protected D{
public:
    L(const int x,const int y,const int z):D(x,y,z){}
    virtual void imprimir(){
        //cout << datopublico<<endl;
        //cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
/*La clase M hereda de forma privada de D, y no puede acceder a ningun dato de la clase base "A" debido a que D
lo heredo de forma privada*/
class M:private D{
public:
    M(const int x,const int y,const int z):D(x,y,z){}
    virtual void imprimir(){
        //cout << datopublico<<endl;
        //cout << datoprotegido<<endl;
        //cout << datoprivado<<endl;
    }
};
int main(){
    // se inicializan un ejemplo de cada clase creada para mostrar su funcionamiento
    //el numero 1 representa al dato publico, el 2 representa al dato protegido y el 3 representa al dato privado
    A uno =A(3,2,1);
    B dos =B(3,2,1);
    C tres =C(3,2,1);
    D cuatro =D(3,2,1);
    E cinco =E(3,2,1);
    F seis =F(3,2,1);
    G siete =G(3,2,1);
    H ocho =H(3,2,1);
    I nueve =I(3,2,1);
    J diez =J(3,2,1);
    K once = K(3,2,1);
    L doce = L(3,2,1);
    M trece = M(3,2,1);
    cout<<"el numero 1 representa al dato publico, el 2 representa al dato protegido y el 3 representa al dato privado\n\n\n";
    cout << "Datos que se pueden acceder de forma libre en la clase A:"<<endl;
    cout << uno.datopublico<<endl;
    //cout << uno.datoprotegido<<endl;
    //cout << uno.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase A:"<<endl;
    uno.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase B:"<<endl;
    cout << dos.datopublico<<endl;
    //cout << dos.datoprotegido<<endl;
    //cout << dos.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase B:"<<endl;
    dos.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase C:"<<endl;
    //cout << tres.datopublico<<endl;
    //cout << tres.datoprotegido<<endl;
    //cout << tres.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase C:"<<endl;
    tres.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase D:"<<endl;
    //cout << cuatro.datopublico<<endl;
    //cout << cuatro.datoprotegido<<endl;
    //cout << cuatro.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase D:"<<endl;
    cuatro.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase E:"<<endl;
    cout << cinco.datopublico<<endl;
    //cout << cinco.datoprotegido<<endl;
    //cout << cinco.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase E:"<<endl;
    cinco.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase F:"<<endl;
    //cout << seis.datopublico<<endl;
    //cout << seis.datoprotegido<<endl;
    //cout << seis.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase F:"<<endl;
    seis.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase G:"<<endl;
    //cout << siete.datopublico<<endl;
    //cout << siete.datoprotegido<<endl;
    //cout << siete.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase G:"<<endl;
    siete.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase H:"<<endl;
    //cout << ocho.datopublico<<endl;
    //cout << ocho.datoprotegido<<endl;
    //cout << ocho.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase H:"<<endl;
    ocho.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase I:"<<endl;
    //cout << nueve.datopublico<<endl;
    //cout << nueve.datoprotegido<<endl;
    //cout << nueve.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase I:"<<endl;
    nueve.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase J:"<<endl;
    //cout << diez.datopublico<<endl;
    //cout << diez.datoprotegido<<endl;
    //cout << diez.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase J:"<<endl;
    diez.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase K:"<<endl;
    //cout << once.datopublico<<endl;
    //cout << once.datoprotegido<<endl;
    //cout << once.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase K:"<<endl;
    once.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase L:"<<endl;
    //cout << doce.datopublico<<endl;
    //cout << doce.datoprotegido<<endl;
    //cout << doce.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase L:"<<endl;
    doce.imprimir();
    cout << "Datos que se pueden acceder de forma libre en la clase M:"<<endl;
    //cout << trece.datopublico<<endl;
    //cout << trece.datoprotegido<<endl;
    //cout << trece.datoprivado<<endl;
    cout << "Datos que se pueden acceder mediante una instancia interna en la clase M:"<<endl;
    trece.imprimir();
    return 0;
}
