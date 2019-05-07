#include <iostream>
#include <ctime>   // time
#include <cstdlib> // rand srand
#include <fstream>

#include "vector.h"

using namespace std;

// 醉汉走步游戏
void game_start();

int main(int argc, char const *argv[])
{
    game_start();
    return 0;
}
void game_start()
{
    using namespace std;
    using VECTOR::Vector;
    // 这个什么意思?
    srand(time(0));
    // 最终距离
    double final_distance;
    // 一步的长度
    double step_len;
    // 总共走多少步
    long step_count = 0;

    // 文件记录
    ofstream fout;
    fout.open("./game.txt");

    Vector result(0.0, 0.0);
    Vector step;

    cout << "input final distance(q means quit):";

    while (cin >> final_distance)
    {
        /* code */
        cout << "input len in every step:";
        if (!(cin >> step_len))
            break;
        fout << "==========Game Start!==========" << endl;
        fout << "distance:" << final_distance << " step_len:" << step_len << endl;

        while (result.magval() < final_distance)
        {
            /* code */
            double rand_ang = rand() % 360;
            step.reset(step_len, rand_ang, Vector::POL);
            result = result + step;
            step_count++;
            // 走的每一步都记录到文件中
            fout << step;

            // 每走5步 就显示一下轨迹
            if (step_count % 5 == 0)
            {
                cout << "current step_count(" << step_count << "), " << result << endl;
                result.polar_mode();
                cout << "or " << endl;
                cout << result;
                result.rect_mode();
            }
        }

        cout << "==========>congratulations!<==========" << endl;
        fout << "==========>congratulations!<==========" << endl;
        cout << "after " << step_count << " steps you out!" << endl;
        fout << "after " << step_count << " steps you out!" << endl;
        cout << "now you are at: " << result << " or" << endl;
        fout << "now you are at: " << result << " or" << endl;
        result.polar_mode();
        cout << result << endl;
        fout << result << endl;
        cout << "ave distance of your step is:" << result.magval() / step_count << endl;
        fout << "ave distance of your step is:" << result.magval() / step_count << endl;
        cout << "================>END<================" << endl;
        fout << "================>END<================" << endl;

        // 重置游戏参数
        step_count = 0;
        result.reset(0.0, 0.0);
        cout << "input final distance(q means quit):";
    }

    // 关闭文件
    fout.close();

    // 游戏结束
    cout << "Bye!" << endl;
    // 最后一段什么意思?
    cin.clear();
    while (cin.get() != '\n')
    {
        /* code */
        continue;
    }
}
