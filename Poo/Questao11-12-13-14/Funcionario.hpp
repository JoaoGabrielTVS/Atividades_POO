#include <iostream>
#include "PessoaF.hpp"
#include <string>
#pragma once
using std::string;
using std::cout, std::endl;

class Funcionario:public PessoaF{
    public:
    Funcionario(string nome, string cpf, string matricula, float salario, float carga_hora_m, float horas_t_m):PessoaF(nome, cpf),carga_hora_m(carga_hora_m),salario(salario),matricula(matricula){
        sethora_t_m(horas_t_m);

    }
    void setmatricula(string matricula){
        this->matricula = matricula;
    }
    string getmatricula(){
        return this->matricula;
    }
    void setsalario(float salario){
        this->salario = salario;
    }
    float getsalario()const{
        return this->salario;
    }
    void setcarga_hora_m(float carga_hora_m){
        this->carga_hora_m = carga_hora_m;
    }
    float getcarga_hora_m()const{
        return this->carga_hora_m;
    }
    void sethora_t_m(float horas_t_m){
        if(horas_t_m <= carga_hora_m)
            this->horas_t_m = horas_t_m;
        else
            exit(1);
    }
    float gethoras_t_m()const{
        return this->horas_t_m;
    }
    float Calcula_Salario_Bruto(){
        return (salario*horas_t_m/carga_hora_m);
    }


    friend ostream& operator<<(ostream& out, const Funcionario& p);


    private:
    string matricula;
    float salario;
    float carga_hora_m;
    float horas_t_m;



};


ostream& operator<<(ostream& out,  Funcionario& p) {
    out << "("<<"O nome he: " << p.getnome_pessoa() << " O salario bruto he: "<< p.Calcula_Salario_Bruto()<<" O matricula he: "<< p.getmatricula()<< " O cpf he: "<<p.getcpf()<<"O Salario: "<< p.getsalario()<<" a carga horarioa he: "<<p.getcarga_hora_m()<<" Hora De Trabalho Mensal: "<< p.gethoras_t_m()<<")"; 
    return out;
}



