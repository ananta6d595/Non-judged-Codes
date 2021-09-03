#include<stdio.h>

typedef struct product
{
    int id,price,quantity;
    char name[100];
} product;

int product_counter=0;
int max_product=500;
product products_arr[500];

int search_product_byname(char name[])
{
    int f=-1,idx;
    for(int i=0; i<product_counter; i++)
    {
        if(strcmp(products_arr[i].name,name)==0)
        {
            f=1;
            idx=i;
        }
    }
    return f==1?idx:-1;
}


int add_product(product p)
{

    int idx=search_product_byname(p.name);
    if(idx== -1)
    {
        products_arr[product_counter++]=p;//add new product
    }
    else
    {
        products_arr[idx].quantity+=p.quantity;//update quantity
    }

}

void create_product()
{
    product t;

    printf("Id :");
    scanf("%d",&t.id);
    if(t.id == -1) break;
    printf("product name :");
    scanf("%s",t.name);
    printf("price :");
    scanf("%d",&t.price);
    printf("quantity :");
    scanf("%d",&t.quantity);

    add_product(t);


}
void show_list_of_product(int with_id)
{
    printf("\t\t****product list ****\n");
    for(int i=0; i<product_counter; i++)
    {
        if(with_id!=1)
            printf("id:(%d), name : %s \n",i+1,products_arr[i].name);
        else
            printf("id: (%d), name : %s \n",products_arr[i].id,products_arr[i].name);
            printf("\tprice : %d\n",products_arr[i].price);
            printf("\tquantity : %d\n\n",products_arr[i].quantity);
    }
}


int search_product_byid(int id)
{
    int f=-1,idx;
    for(int i=0; i<product_counter; i++)
    {
        if(products_arr[i].id==id)
        {
            f=1;
            idx=i;
        }
    }
    return f==1?idx:-1;
}

int main()
{

int i, id;
FILE *fp;
fp  = fopen ("store.txt", "a");

    fprintf("Id NAme                Price       Quantity");
    do
    {
        create_product();

        fprintf(fp, "%-12d %8s %12d %12d\n", p.id, p.name, p.price, p.quantity);
    }while(1);

    for(;;){

    printf("Enter Id: ");
    scanf("%d", &i);
    fscanf(fp, "%-12d %8s %12d %12d\n", id, name, price, quantity);
    if(i == id)
    show_list_of_product(id);

    }

    return 0;
}
