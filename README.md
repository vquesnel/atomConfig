# atomConfig

Personal Atom config

## Setting

```{r, engine='bash', count_lines}
mv ~/.atom ~/.atomBackup
mv atomCom ~/.atom
cp -R ~/.atomBackup/storage ~/.atomBackup/compile-cache ~/.atomBackup/dev ~/.atomBackup/.npm ~/.atomBackup/.node-gyp ~/.atom/
```

## Get your old config 

```{r, engine='bash', count_lines}
rm -rf ~/.atom 
mv ~/.atomBackup ~/.atom
```
