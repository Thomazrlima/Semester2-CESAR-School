void Tempo() {
  int seg = 60;
  int mim = 2;
  
  for(seg,mim;;seg--)
  {
      if(mim==0 && seg==0)
      {
          system("clear");
          printf("O tempo acabou !");
          return 0;
      }
      system("clear");
      printf("\n\n%02d:%02d",mim,seg);
      sleep(1);

      if(seg==0)
      {
          mim--;
          seg=seg+60;
      }
  }
}