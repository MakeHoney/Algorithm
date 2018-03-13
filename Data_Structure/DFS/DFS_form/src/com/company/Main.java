package com.company;

import java.util.Scanner;


public class Main {

    static int nE;
    static int nV;
    static int[][] ad;
    static boolean[] visit;

    private static void dfs(int i){
        visit[i] = true;   // 함수 호출 시, visit 했음을 표시

        for(int j = 1; j < nV+1; j++){
            if(ad[i][j] == 1 && !visit[j]){  // j를 방문하지 않았으면 j를 방문한다.
                System.out.println(i + "에서" + j + "로 이동");
                dfs(j);                      // 재귀로 구성한것은 스택구조로 만들기 위함.
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        nV = scan.nextInt();
        nE = scan.nextInt();
        ad = new int[nV+1][nV+1]; // 변수 초기화
        visit = new boolean[nV+1]; // 변수 초기화

        for(int i = 0; i < nE; i++){
            int t1 = scan.nextInt();
            int t2 = scan.nextInt();

            ad[t1][t2] = ad[t2][t1] = 1;
        }
        dfs(1); // 1번부터 탐색 시작
    }
}
