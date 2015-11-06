static QString TrataVirgulas(QString x)
{
	QString y;
	int j=0;
	int position[2];
	int cont =0;
	while ((j = x.indexOf(",", j)) != -1) {  	
		if (cont==0){
			y=x;	
		}else{
			y=x.remove(j, 1);
		}
		position[cont] =j;
		cont++;
		++j;
	}
	return y;
}

static QString TiraPontoVirgula(QString x)
{
	int j = 0;

	while ((j = x.indexOf(".", j)) != -1) {
		x.remove(j, 1);
		++j;
	}
	x.remove(QRegExp(","));	
	return x;
}



static bool VerificaVirgula(QString x)
{
	QString str = x;
	QString y;
	int position[2];	
	int j = 0;
	int cont=0;
	bool ok;
	while ((j = str.indexOf(",", j)) != -1) {
		y=str.remove(j, 1);
		position[cont] =j;
		cont++;
		++j;
	}
	
	if(cont==0){
		ok=false;
		return ok;
	}else if(cont>0){
		ok=true;
		return ok;
	}
}
static bool VerificaZero(QString x)
{
	QString str = x;
	QString y;
	int position[2];	
	int j = 0;
	int cont=0;
	bool ok;
	while ((j = str.indexOf("0", j)) != -1) {
		y=str.remove(j, 1);
		position[cont] =j;
		cont++;
		++j;
	}
	
	if(cont==0){
		ok=false;
		return ok;
	}else if(cont>0){
		ok=true;
		return ok;
	}
}

static QVariant Calcular(QString x)
{
	QString str = x;
	QString y;
	int position[2];	
	int j = 0;
	int cont=0;
 
     while ((j = str.indexOf(".", j)) != -1) {
  	 y=str.remove(j, 1);
	position[cont] =j;

	 cont++;
         ++j;
     }

	if(cont==0){
		QVariant n = x;
		return n;
	}else if(cont>0){
		QVariant n = y;
		return n;
	}
}

static QString Mascara(QString x)
{
	QVariant  z;
	QString vlrpro;
	QString vlrpos;
	QString zero1;
	QString zero2;
	QString zero3;
	QString DigVery;

	

	QVariant y;
	vlrpro=x;
	int numb;
	int numb2;
	int numb3;

	bool ok = VerificaVirgula(x);
	if(ok==true){

//		vlrpro = TrataVirgulas(vlrpro);		

//		numb =vlrpro.indexOf(",");
//		vlrpos =vlrpro.mid(numb,3);
//		vlrpro = vlrpro.left(numb);	
		if (vlrpro.count() ==1 ){
//			vlrpro.prepend("0,0");;
//			vlrpro.insert ( 1,"." );
			
		}else if(vlrpro.count()==5){
	
//		bool ok2 = VerificaZero(x);
//		if(ok2==true){

			numb =vlrpro.indexOf(",");

			numb2 =vlrpro.indexOf(",");
			numb2 = numb2 +1;

			numb3 =vlrpro.indexOf(",");


			zero1 = vlrpro.mid(numb2,1);
			zero2 = vlrpro.left(numb3);
			y = zero2;
			bool ok2 = VerificaZero(zero1);

			bool ok3 = VerificaZero(zero2);

			if(ok2 ==true){
				numb = numb + 2;
				vlrpro =vlrpro.mid(numb,4);
 				vlrpro.prepend("0,");	
			}else if(ok3==true){
				numb = numb + 2;
				vlrpro =vlrpro.mid(numb,4);
 				vlrpro.prepend(",");
 				vlrpro.prepend(zero1);
			}else{
			vlrpro = TiraPontoVirgula(vlrpro);	
			zero3 =vlrpro.left(2);
			vlrpro = vlrpro.mid(2,2);
			vlrpro.prepend(","); 
			vlrpro.prepend(zero3);
			
			}

		}else if(vlrpro.count()==6){
			vlrpro = TiraPontoVirgula(vlrpro);	
			vlrpro.insert ( 3,"," );
		}else if(vlrpro.count()==7){
			vlrpro = TiraPontoVirgula(vlrpro);	
			vlrpro.insert ( 4,"," );
			vlrpro.insert ( 1,"." );
		}else if(vlrpro.count()==9){
			vlrpro = TiraPontoVirgula(vlrpro);	
			vlrpro.insert ( 5,"," );
			vlrpro.insert ( 2,"." );
		}


	//	vlrpro = vlrpro+","+vlrpos;
		return vlrpro;

	}else{

		if (vlrpro.count() ==1 ){
//			vlrpro.insert ( 1,vlrpro+"0,0" );
			vlrpro = TiraPontoVirgula(vlrpro);		
 			vlrpro.prepend("0,0");
//			vlrpro.insert ( 1,"." );
//			vlrpro.insert ( 1,"." );
			
		}else if(vlrpro.count()==50){
		
			vlrpro = TiraPontoVirgula(vlrpro);		
 			vlrpro.prepend("0,");

		}else if(vlrpro.count()==10){
		
			z =Calcular(vlrpro);
			vlrpro =z.toString();
			vlrpro.insert ( 3,"." );
		}else if(vlrpro.count()==20){
		
			z =Calcular(vlrpro);
			vlrpro =z.toString();
			vlrpro.insert ( 1,"." );
			vlrpro.insert ( 5,"." );
		}else{
		vlrpro = "";
		}
		return vlrpro;
	}
}

static QString soma(QString x,QString y)
{	
	x = TiraPontoVirgula(x);
	y = TiraPontoVirgula(y);
	
	int vlr1= x.toInt();
	int vlr2= y.toInt();
	
	QVariant z = vlr1*vlr2;
	return z.toString();

}
