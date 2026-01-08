/*  
if (is_online)
    if (is_admin)
        printf("Привет, Админ!");
else
    printf("Ты не в сети!"); // это относиться ко второму инту

Что видит компьютер:

if (is_online) {
    if (is_admin) {
        printf("Привет, Админ!");
    } else {
        printf("Ты не в сети!"); // НА САМОМ ДЕЛЕ ЭТО ЗДЕСЬ!
    }
}
*/