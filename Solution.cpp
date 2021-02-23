
//
// Created by N on 2021/02/21.
//

#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
#include <array>
using namespace std;


class Solution {

public:

    // 모의고사
    vector<int> termTest(vector<int> answers) {
        vector<int> answer;
        int arr1[] = {1, 2, 3, 4, 5};
        int arr2[] = {2, 1, 2, 3, 2, 4, 2, 5};
        int arr3[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        vector<int> sol1 = vector<int>();
        vector<int> sol2 = vector<int>();
        vector<int> sol3 = vector<int>();
        for (int i = 0; i < answers.size(); i++) {
            sol1.push_back(arr1[i%5]);
            sol2.push_back((arr2[i%8]));
            sol3.push_back((arr3[i%10]));
        }

        int cnt[3] = {0, 0, 0};

        for (int i = 0; i < answers.size(); i++) {
            if (answers[i] == sol1[i]) {
                cnt[0]++;
            }

            if (answers[i] == sol2[i]) {
                cnt[1]++;
            }

            if (answers[i] == sol3[i]) {
                cnt[2]++;
            }
        }

        // Find max
        int max = cnt[0];
        answer.push_back(1);
        for (int i = 1; i < sizeof(cnt)/sizeof(cnt[0]); i++) {
            if (max == cnt[i]) {
                answer.push_back(i + 1);
            }
            else if (max < cnt[i]) {
                max = cnt[i];
                answer.clear();
                answer.push_back(i + 1);
            }
        }

        cout << answer.size() << answer[0];

        return answer;

    }

    // 완주하지 못한 선수
    void removeParticipantName(string name, vector<string> &participant) {
        vector<string>::iterator iter = participant.begin();
        for(iter; iter < participant.end(); iter++) {
            if (name == *iter) {
                participant.erase(iter);
                break;
            }
        }
    }

    string failedPlayer(vector<string> participant, vector<string> completion) {
        string answer = "";
        vector<string>::iterator iterComp = completion.begin();

        for (iterComp; iterComp < completion.end(); iterComp++) {
            removeParticipantName(*iterComp, participant);
        }

        return participant.back();
    }
};
