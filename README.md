# 📈 Sharpe Oranı Hesaplayıcı

Bu C programı, yatırım performansını değerlendirmek için kullanılan **Sharpe Oranı**'nı hesaplar. Kullanıcıdan yatırım getirisi, risksiz faiz oranı ve standart sapma değerlerini alarak oranı hesaplar ve yorumlar.

## 🧠 Sharpe Oranı Nedir?

**Sharpe Oranı**, bir yatırımın riskine göre ne kadar iyi performans gösterdiğini ölçen bir finansal metriktir. Aşağıdaki formülle hesaplanır:

\[
\text{Sharpe Oranı} = \frac{\text{Getiri} - \text{Risksiz Oran}}{\text{Standart Sapma}}
\]

## 🚀 Özellikler

- Kullanıcıdan yüzde cinsinden veri alır
- Sharpe Oranı'nı hesaplar
- Oranı yorumlayarak kullanıcıya bilgi verir:
  - `> 3.0` → Mükemmel
  - `2.0 – 3.0` → Çok iyi
  - `1.0 – 2.0` → İyi
  - `< 1.0` → Düşük

## 🛠️ Derleme ve Çalıştırma

```bash
gcc sharpe_orani.c -o sharpe_orani
./sharpe_orani
```

## 🧑‍💻 Kullanım

Program çalıştırıldığında sırasıyla şu veriler istenir:

- **Yatırım getirisi (%)**
- **Risksiz faiz oranı (%)**
- **Standart sapma (%)**

## 📂 Örnek Çıktı

Yatirim getirisini girin (%): 12

Risksiz faiz oranini girin (%): 4

Standart sapmayi girin (%): 5

Sharpe Orani: 1.60

Sharpe Orani iyi.
