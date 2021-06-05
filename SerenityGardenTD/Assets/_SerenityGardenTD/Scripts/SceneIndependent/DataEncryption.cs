using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace SerenityGarden
{
    public class DataEncryption
    {
        public static int xorKey = 129;

        public static string EncryptDecrypt(string textToEncrypt)
        {
            StringBuilder inSb = new StringBuilder(textToEncrypt);
            StringBuilder outSb = new StringBuilder(textToEncrypt.Length);
            char c;
            for (int i = 0; i < textToEncrypt.Length; i++)
            {
                c = inSb[i];
                c = (char)(c ^ xorKey);
                outSb.Append(c);
            }
            return outSb.ToString();
        }
    }
}