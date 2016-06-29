void Ordina (int v[],int num){
 int appoggio;
 for (int i=0;i<num;i++){
  for (int j=0;j<num;j++){
   if (v[i]<v[j]){
    appoggio=v[i];
    v[i]=v[j];
    v[j]=appoggio;
   }  
  }
 }
}
//Questo è l'ordinamento più semplice possibile da ricordare, poiché utilizza due cicli identici ed un if, oltre agli scambi.
