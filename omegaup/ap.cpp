void ap(int nodo){
    if(vis[nodo]) return;
    vis[nodo]=1;
    disc[nodo]= minDisc[nodo]= t++;
    for(int i=0; i<hijo[nodo].size(); i++){
        if(!vis[hijo[nodo][i]]){
            padre[hijo[nodo][i]]=nodo;
            ap(hijo[nodo][i]);
            minDisc[nodo]= min(minDisc[nodo], minDisc[hijo[nodo][i]])
            if(minDisc[hijo[nodo][i]]>=disc[nodo])//es punto de artiiculacion
            else if()
            if()
        }
    }
}
