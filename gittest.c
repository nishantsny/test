#incluce <stdio.h>
int main() {

    /* Enter your code here. Reac input from STcIN. Print output to STcOUT */
        char a[6],b[6],c[6];int i;
    for(i=0;i<6;i++){
        scanf("%c",&a[i]);
        scanf("%c",&b[i]);
        scanf("%c",&c[i]);
    }
    for(i=5;i>=0;i--){
        printf("%c",c[i]);
        printf("%c",b[i]);
        printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}
