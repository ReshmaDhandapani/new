#include<iostream>
using namespace std;
class coordinates
{
    public:
    int x_coordinate;
    int y_coordinate;
};
void sort(coordinates data[], int n) 
{
    coordinates temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (data[i].x_coordinate > data[j].x_coordinate)
            {
                temp.x_coordinate =  data[i].x_coordinate;
                temp.y_coordinate =  data[i].y_coordinate;
                data[i].x_coordinate = data[j].x_coordinate;
                data[i].y_coordinate = data[j].y_coordinate;
                data[j].x_coordinate = temp.x_coordinate;
                data[j].y_coordinate = temp.y_coordinate;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"\nx : "<<data[i].x_coordinate<<"\ny : "<<data[i].y_coordinate;
    }
}
int main()
{
    coordinates data[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    int n = sizeof(data)/sizeof(data[0]);
    sort(data,n);
}