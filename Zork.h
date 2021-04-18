<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>Zork</class>
 <widget class="QMainWindow" name="Zork">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>613</width>
    <height>643</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Zork</string>
  </property>
  <widget class="QWidget" name="centralWidget">
   <layout class="QFormLayout" name="formLayout">
    <item row="0" column="1">
     <widget class="QStackedWidget" name="stackedWidget">
      <widget class="QWidget" name="stackedWidgetPage1">
       <widget class="QPushButton" name="TakeY">
        <property name="enabled">
         <bool>true</bool>
        </property>
        <property name="geometry">
         <rect>
          <x>210</x>
          <y>240</y>
          <width>174</width>
          <height>21</height>
         </rect>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background-color: lightgrey;
color:  black;
    border-radius: 10px;
    font: 14px;
    min-width: 10em;
    padding: 2px;</string>
        </property>
        <property name="text">
         <string>Take Y</string>
        </property>
       </widget>
       <widget class="QPushButton" name="TakeX">
        <property name="enabled">
         <bool>true</bool>
        </property>
        <property name="geometry">
         <rect>
          <x>10</x>
          <y>240</y>
          <width>174</width>
          <height>21</height>
         </rect>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background-color: lightgrey;
color:  black;
    border-radius: 10px;
    font: 14px;
    min-width: 10em;
    padding: 2px;</string>
        </property>
        <property name="text">
         <string>Take X</string>
        </property>
       </widget>
       <widget class="QTextEdit" name="outputText">
        <property name="geometry">
         <rect>
          <x>10</x>
          <y>10</y>
          <width>571</width>
          <height>151</height>
         </rect>
        </property>
        <property name="readOnly">
         <bool>true</bool>
        </property>
       </widget>
       <widget class="QPushButton" name="goNorth">
        <property name="geometry">
         <rect>
          <x>260</x>
          <y>280</y>
          <width>54</width>
          <height>57</height>
         </rect>
        </property>
        <property name="minimumSize">
         <size>
          <width>54</width>
          <height>57</height>
         </size>
        </property>
        <property name="maximumSize">
         <size>
          <width>54</width>
          <height>55</height>
         </size>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background: transparent;
background-image:url(:/resources/images/arrow-north.png);</string>
        </property>
        <property name="text">
         <string/>
        </property>
       </widget>
       <widget class="QPushButton" name="goSouth">
        <property name="geometry">
         <rect>
          <x>260</x>
          <y>390</y>
          <width>54</width>
          <height>57</height>
         </rect>
        </property>
        <property name="minimumSize">
         <size>
          <width>54</width>
          <height>57</height>
         </size>
        </property>
        <property name="maximumSize">
         <size>
          <width>54</width>
          <height>55</height>
         </size>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background: transparent;
background-image:url(:/resources/images/arrow-south.png);</string>
        </property>
        <property name="text">
         <string/>
        </property>
       </widget>
       <widget class="QPushButton" name="goEast">
        <property name="geometry">
         <rect>
          <x>310</x>
          <y>340</y>
          <width>56</width>
          <height>55</height>
         </rect>
        </property>
        <property name="minimumSize">
         <size>
          <width>56</width>
          <height>55</height>
         </size>
        </property>
        <property name="maximumSize">
         <size>
          <width>56</width>
          <height>55</height>
         </size>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background: transparent;
background-image:url(:/resources/images/arrow-east.png);</string>
        </property>
        <property name="text">
         <string/>
        </property>
       </widget>
       <widget class="QPushButton" name="goWest">
        <property name="geometry">
         <rect>
          <x>210</x>
          <y>340</y>
          <width>56</width>
          <height>55</height>
         </rect>
        </property>
        <property name="minimumSize">
         <size>
          <width>56</width>
          <height>55</height>
         </size>
        </property>
        <property name="maximumSize">
         <size>
          <width>56</width>
          <height>55</height>
         </size>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background: transparent;
background-image:url(:/resources/images/arrow-west.png);</string>
        </property>
        <property name="text">
         <string/>
        </property>
       </widget>
       <widget class="QProgressBar" name="healthBar">
        <property name="geometry">
         <rect>
          <x>10</x>
          <y>200</y>
          <width>571</width>
          <height>20</height>
         </rect>
        </property>
        <property name="minimumSize">
         <size>
          <width>0</width>
          <height>0</height>
         </size>
        </property>
        <property name="palette">
         <palette>
          <active>
           <colorrole role="WindowText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Button">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Light">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>255</red>
              <green>94</green>
              <blue>105</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Midlight">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>244</red>
              <green>47</green>
              <blue>60</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Dark">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>116</red>
              <green>0</green>
              <blue>7</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Mid">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>155</red>
              <green>0</green>
              <blue>10</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Text">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="BrightText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>252</red>
              <green>26</green>
              <blue>20</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ButtonText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Base">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Window">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Shadow">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="AlternateBase">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>244</red>
              <green>127</green>
              <blue>135</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ToolTipBase">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>255</red>
              <green>255</green>
              <blue>220</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ToolTipText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="PlaceholderText">
            <brush brushstyle="SolidPattern">
             <color alpha="128">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
          </active>
          <inactive>
           <colorrole role="WindowText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Button">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Light">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>255</red>
              <green>94</green>
              <blue>105</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Midlight">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>244</red>
              <green>47</green>
              <blue>60</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Dark">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>116</red>
              <green>0</green>
              <blue>7</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Mid">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>155</red>
              <green>0</green>
              <blue>10</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Text">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="BrightText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>252</red>
              <green>26</green>
              <blue>20</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ButtonText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Base">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Window">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Shadow">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="AlternateBase">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>244</red>
              <green>127</green>
              <blue>135</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ToolTipBase">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>255</red>
              <green>255</green>
              <blue>220</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ToolTipText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="PlaceholderText">
            <brush brushstyle="SolidPattern">
             <color alpha="128">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
          </inactive>
          <disabled>
           <colorrole role="WindowText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Button">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Light">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>255</red>
              <green>94</green>
              <blue>105</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Midlight">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>244</red>
              <green>47</green>
              <blue>60</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Dark">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>116</red>
              <green>0</green>
              <blue>7</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Mid">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>155</red>
              <green>0</green>
              <blue>10</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Text">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="BrightText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>252</red>
              <green>26</green>
              <blue>20</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ButtonText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Base">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Window">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>250</red>
              <green>250</green>
              <blue>250</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="Shadow">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="AlternateBase">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>233</red>
              <green>0</green>
              <blue>15</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ToolTipBase">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>255</red>
              <green>255</green>
              <blue>220</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="ToolTipText">
            <brush brushstyle="SolidPattern">
             <color alpha="255">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
           <colorrole role="PlaceholderText">
            <brush brushstyle="SolidPattern">
             <color alpha="128">
              <red>0</red>
              <green>0</green>
              <blue>0</blue>
             </color>
            </brush>
           </colorrole>
          </disabled>
         </palette>
        </property>
        <property name="styleSheet">
         <string notr="true">QProgressBar {
                           background-color: #FAFAFA;
                           color: #000;
                           border-style: outset;
                           border-width: 2px;
                           border-color: #FAFAFA;
                           border-radius: 7px;
						text-align: center;
}

QProgressBar::chunk { 
                           background-color: #E53935; 
}</string>
        </property>
        <property name="value">
         <number>50</number>
        </property>
        <property name="orientation">
         <enum>Qt::Horizontal</enum>
        </property>
       </widget>
       <widget class="QLabel" name="label">
        <property name="geometry">
         <rect>
          <x>260</x>
          <y>170</y>
          <width>71</width>
          <height>21</height>
         </rect>
        </property>
        <property name="font">
         <font>
          <pointsize>12</pointsize>
          <weight>75</weight>
          <bold>true</bold>
         </font>
        </property>
        <property name="text">
         <string>Health:</string>
        </property>
       </widget>
       <widget class="QPushButton" name="TakeZ">
        <property name="enabled">
         <bool>true</bool>
        </property>
        <property name="geometry">
         <rect>
          <x>410</x>
          <y>240</y>
          <width>174</width>
          <height>21</height>
         </rect>
        </property>
        <property name="cursor">
         <cursorShape>PointingHandCursor</cursorShape>
        </property>
        <property name="styleSheet">
         <string notr="true">background-color: lightgrey;
color:  black;
    border-radius: 10px;
    font: 14px;
    min-width: 10em;
    padding: 2px;</string>
        </property>
        <property name="text">
         <string>Take Z</string>
        </property>
       </widget>
       <widget class="QTextEdit" name="outputText_inventory">
        <property name="geometry">
         <rect>
          <x>10</x>
          <y>300</y>
          <width>91</width>
          <height>261</height>
         </rect>
        </property>
        <property name="readOnly">
         <bool>true</bool>
        </property>
       </widget>
       <widget class="QTextEdit" name="outputText_map">
        <property name="geometry">
         <rect>
          <x>420</x>
          <y>300</y>
          <width>161</width>
          <height>261</height>
         </rect>
        </property>
        <property name="readOnly">
         <bool>true</bool>
        </property>
       </widget>
       <widget class="QLabel" name="label_2">
        <property name="geometry">
         <rect>
          <x>40</x>
          <y>270</y>
          <width>91</width>
          <height>21</height>
         </rect>
        </property>
        <property name="font">
         <font>
          <pointsize>12</pointsize>
          <weight>75</weight>
          <bold>true</bold>
         </font>
        </property>
        <property name="text">
         <string>Inventory:</string>
        </property>
       </widget>
       <widget class="QLabel" name="label_3">
        <property name="geometry">
         <rect>
          <x>480</x>
          <y>270</y>
          <width>41</width>
          <height>21</height>
         </rect>
        </property>
        <property name="font">
         <font>
          <pointsize>12</pointsize>
          <weight>75</weight>
          <bold>true</bold>
         </font>
        </property>
        <property name="text">
         <string>Map:</string>
        </property>
       </widget>
       <zorder>TakeY</zorder>
       <zorder>TakeX</zorder>
       <zorder>outputText</zorder>
       <zorder>healthBar</zorder>
       <zorder>label</zorder>
       <zorder>TakeZ</zorder>
       <zorder>goSouth</zorder>
       <zorder>goEast</zorder>
       <zorder>goWest</zorder>
       <zorder>outputText_inventory</zorder>
       <zorder>outputText_map</zorder>
       <zorder>goNorth</zorder>
       <zorder>label_2</zorder>
       <zorder>label_3</zorder>
      </widget>
     </widget>
    </item>
   </layout>
  </widget>
  <widget class="QMenuBar" name="menuBar">
   <property name="geometry">
    <rect>
     <x>0</x>
     <y>0</y>
     <width>613</width>
     <height>21</height>
    </rect>
   </property>
  </widget>
  <widget class="QToolBar" name="mainToolBar">
   <attribute name="toolBarArea">
    <enum>TopToolBarArea</enum>
   </attribute>
   <attribute name="toolBarBreak">
    <bool>false</bool>
   </attribute>
  </widget>
  <widget class="QStatusBar" name="statusBar"/>
 </widget>
 <layoutdefault spacing="6" margin="11"/>
 <resources/>
 <connections/>
</ui>
