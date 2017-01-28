/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                     LedPotenciometre                        **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 23/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                //Inicia el bloc
// 
  pinMode(3,OUTPUT) ;

}                             //Finalitza el bloc

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
 // 
 sensorValue=analogRead(A0) ;

analogWrite(3,sensorValue/4) ;
  }

}                          //Finalitza el bloc

//************************** FUNCIONS ***************************
