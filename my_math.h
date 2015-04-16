long my_pow(long num,int root)
{
        int i=0;
        long result=1;

        for(i=0;i<root;i++)
        {
                result*=num;
        }

        return result;
}
