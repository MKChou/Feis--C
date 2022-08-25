#include <stdio.h>

int main() {
    printf("Hello World! \n");
    return 0;
}



echo "# Feis--C" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add aaa git@github.com:MKChou/Feis--C.git
git push -u aaa main