__author__ = 'tingxinzhe'
__date__ = '14/10/2018'
import os
import wave
import numpy as np
import matplotlib.pyplot as plt

# 获取文件路径
module_path = os.path.dirname(__file__)
filein = module_path+'/musicbox.wav'

# 打开文件
wav_file = wave.open(filein, 'r')

wav_file_info = wav_file.readframes(-1)
wav_file_info = np.fromstring(wav_file_info, np.int16)
f = wav_file.getframerate()
wav_file.close()

plt.subplot(211)
plt.plot(wav_file_info)
plt.ylabel('Amplitude')
plt.title('Waveform ang spectrogram of timian.wav')

plt.subplot(212)
plt.specgram(wav_file_info, Fs=f, scale_by_freq=True, sides='default')
plt.ylabel('Frequency')
plt.xlabel('time(seconds)')
plt.show()
