#pragma once

#include "iostream"
#include "fstream"
#include "string"
#include "sstream"
#include "filesystem"
#include "../External/json.hpp"

struct GameConfig 
{
    static bool noColor;    // ΪTrueʱ����ʾ��ɫ
    static int radicalFactor; // �����ȣ�Ĭ��Ϊ5����߻ᵼ�¼������
    static int threadNum;   // �߳�����Ĭ��Ϊ12���ɸ�������CPU����
    static int searchN;  // ����������Ĭ��Ϊ6144����С��ֵ���Լӿ��ٶȣ����ή��׼ȷ��
    static bool debugPrint; // ��ʾ������Ϣ�����������'.'��Ĭ��ΪFalse

    static void load(const std::string &path);
};