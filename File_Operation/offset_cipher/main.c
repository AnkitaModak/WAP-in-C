#include <stdio.h>
char encrypt_char(char ch){
    return ch +1;
}
char decrypt_char(char ch){
    return ch -1;
}
int main(){
    FILE *input,*encrypt_file,*decrypt_file;
    int ch;
  //ENCRYPTION👇👇👇👇👇
    input = fopen("secret.txt","r");
    encrypt_file = fopen("encrypted.txt", "wb");
    if(input == NULL || encrypt_file == NULL){
        printf("Error opening file");
        return 1;
    }
    while((ch = fgetc(input))!= EOF){
        fputc(encrypt_char((char)ch),encrypt_file);
    }
    fflush(encrypt_file);
    fclose(encrypt_file);
    fclose(input);

    printf("Encryption complete. Output saved to 'encrypted.txt'.\n");
  //DECRYPTION👇👇👇👇👇
    encrypt_file = fopen("encrypted.txt", "r");
    decrypt_file = fopen("decrypted.txt", "wb");
    if(encrypt_file == NULL || decrypt_file == NULL){
        printf("Error opening file");
        return 1;
    }
    while((ch = fgetc(encrypt_file))!= EOF){
        fputc(decrypt_char((char)ch),decrypt_file);
    }
    fflush(decrypt_file);
    fclose(encrypt_file);
    fclose(decrypt_file);

    printf("Decryption complete. Output saved to 'decrypted.txt'.\n");
    return 0;
}
