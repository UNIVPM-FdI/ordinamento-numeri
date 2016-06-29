void Ordina (int v[],int num){
 int appoggio;
 for (int i=0;i<n;i++){
  for (int j=0;j<n;j++){
   if (v[i]<v[j]){
    appoggio=v[i];
    v[i]=v[j];
    v[j]=appoggio;
   }  
  }
 }
}
