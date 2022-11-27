import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

class Calci implements ActionListener
{
	public JFrame f;
	public JTextField t;
	public JButton b1,b2,b3,b4,b5,b6,b7,b8,b9,b0,bAdd,bSub,bMult,bDiv,bEqual,bDelete,bDecimal,bClear;
	public int a = 0,b = 0,result = 0;
	public int operator = 0;
	
	public Calci()
	{
		f = new JFrame("Practice Calulator");
		f.setVisible(true);
		f.setLayout(null);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setBounds(20,20,300,350);
		f.setResizable(false);
		Font fo = new Font("Arial", Font.BOLD,20);
		t= new JTextField();
		t.setFont(fo);
		t.setBackground(Color.WHITE);
		t.setForeground(Color.BLACK);
		t.setBounds(40,40,200,50);
		
		b1 =new JButton("1");
		b2 =new JButton("2");
		b3 =new JButton("3");
		b4 =new JButton("4");
		b5 =new JButton("5");
		b6 =new JButton("6");
		b7 =new JButton("7");
		b8 =new JButton("8");
		b9 =new JButton("9");
		b0 =new JButton("0");
		bEqual = new JButton("=");
		bEqual.setFont(fo);
		bAdd =new JButton("+");
		bAdd.setFont(fo);
		bSub =new JButton("-");
		bSub.setFont(fo);
		bDiv =new JButton("/");
		bDiv.setFont(fo);
		bMult =new JButton("*");
		bMult.setFont(fo);
		bDecimal =new JButton(".");
		bDecimal.setFont(fo);
		bDelete =new JButton("Delete");
		bDelete.setFont(fo);
		bClear =new JButton("Clear");
		bClear.setFont(fo);
		
		b7.setBounds(40,100,50,40);
		b8.setBounds(90,100,50,40);
		b9.setBounds(140,100,50,40);
		bDiv.setBounds(190,100,50,40);
		
		b4.setBounds(40,140,50,40);
		b5.setBounds(90,140,50,40);
		b6.setBounds(140,140,50,40);
		bMult.setBounds(190,140,50,40);
		
		b1.setBounds(40,180,50,40);
		b2.setBounds(90,180,50,40);
		b3.setBounds(140,180,50,40);
		bSub.setBounds(190,180,50,40);
		
		bDecimal.setBounds(40,220,50,40);
		b0.setBounds(90,220,50,40);
		bEqual.setBounds(140,220,50,40);
		bAdd.setBounds(190,220,50,40);
		
		bDelete.setBounds(40,260,100,40);
		bClear.setBounds(140,260,100,40);
		
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
		b6.addActionListener(this);
		b7.addActionListener(this);
		b8.addActionListener(this);
		b9.addActionListener(this);
		b0.addActionListener(this);
		bAdd.addActionListener(this);
		bSub.addActionListener(this);
		bDiv.addActionListener(this);
		bMult.addActionListener(this);
		bEqual.addActionListener(this);
		bClear.addActionListener(this);
		bDelete.addActionListener(this);
		bDecimal.addActionListener(this);
		
		
		
		f.add(t);
		f.add(b1);
		f.add(b2);
		f.add(b3);
		f.add(b4);
		f.add(b5);
		f.add(b6);
		f.add(b7);
		f.add(b8);
		f.add(b9);
		f.add(b0);
		f.add(bAdd);
		f.add(bSub);
		f.add(bMult);
		f.add(bDiv);
		f.add(bDelete);
		f.add(bClear);
		f.add(bEqual);
		f.add(bDecimal);
		
		
		
		
	}
	public static void main(String a[])
	{
		new Calci();
		
	}
	
	public void actionPerformed(ActionEvent aobj)
	{
		if(aobj.getSource() == b1)
		{
			t.setText(t.getText().concat("1"));
		}
		if(aobj.getSource() == b2)
		{
			t.setText(t.getText().concat("2"));
		}
		if(aobj.getSource() == b3)
		{
			t.setText(t.getText().concat("3"));
		}
		if(aobj.getSource() == b4)
		{
			t.setText(t.getText().concat("4"));
		}
		if(aobj.getSource() == b5)
		{
			t.setText(t.getText().concat("5"));
		}
		if(aobj.getSource() == b6)
		{
			t.setText(t.getText().concat("6"));
		}
		if(aobj.getSource() == b7)
		{
			t.setText(t.getText().concat("7"));
		}
		if(aobj.getSource() == b8)
		{
			t.setText(t.getText().concat("8"));
		}
		if(aobj.getSource() == b9)
		{
			t.setText(t.getText().concat("9"));
		}
		if(aobj.getSource() == b0)
		{
			t.setText(t.getText().concat("0"));
		}
		if(aobj.getSource() == bDecimal)
		{
			t.setText(t.getText().concat("."));
		}
		if(aobj.getSource() == bAdd)
		{
			a=Integer.parseInt(t.getText());
			operator=1;
			t.setText("");
		}
		if(aobj.getSource() == bSub)
		{
			a=Integer.parseInt(t.getText());
			operator=2;
			t.setText("");
		}
		if(aobj.getSource() == bMult)
		{
			a=Integer.parseInt(t.getText());
			operator=3;
			t.setText("");
		}
		if(aobj.getSource() == bDiv)
		{
			a=Integer.parseInt(t.getText());
			operator=4;
			t.setText("");
		}
		if(aobj.getSource() == bClear)
		{
			t.setText("");
		}
		if(aobj.getSource() == bDelete)
		{
			String s = t.getText();
			t.setText("");
			for(int i =0; i<s.length()-1;i++)
			{
				t.setText(t.getText()+s.charAt(i));
			}
		}
		if(aobj.getSource() == bEqual)
		{
			b=Integer.parseInt(t.getText());
			switch (operator)
			{
				case 1: result = a+b;
				       break;
				case 2: result = a-b;
				       break;
				case 3: result = a*b;
				       break;
				case 4: result = a/b;
				       break;
				
			}
			
			t.setText(""+result);
			
		}
		
		
	}
}